/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:03:10 by fduque-a          #+#    #+#             */
/*   Updated: 2023/04/20 18:50:52 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*dest;

	if (!s)
		return (NULL);
	dest = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s, ft_strlen(s) + 1);
	i = 0;
	while (i < ft_strlen(s))
	{
		dest[i] = (*f)(i, dest[i]);
		i++;
	}
	return (dest);
}
