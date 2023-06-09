/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 11:17:18 by fduque-a          #+#    #+#             */
/*   Updated: 2023/04/26 03:28:39 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (len - 1 > i && ft_strchr(set, s1[len - 1]))
		len--;
	if (i > len - 1 || !set)
		return (ft_strdup(""));
	dest = (char *)malloc(len - i + 1);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1 + i, len - i + 1);
	return (dest);
}
