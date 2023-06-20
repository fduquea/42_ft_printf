/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:46:36 by fduque-a          #+#    #+#             */
/*   Updated: 2023/04/26 15:19:29 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count);
}

static char	*ft_words(char const *s, int len)
{
	char	*dest;

	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	return ((char *) ft_memcpy(dest, s, len));
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**strings;
	int		len;

	strings = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!s || !(strings))
		return (NULL);
	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] == c)
			j++;
		else
		{
			len = 0;
			while (s[j + len] && s[j + len] != c)
				len++;
			strings[i++] = ft_words(s + j, len);
			j += len;
		}
	}
	strings[i] = NULL;
	return (strings);
}
