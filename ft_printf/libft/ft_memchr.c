/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:00:02 by fduque-a          #+#    #+#             */
/*   Updated: 2023/04/26 00:05:01 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char		*str_cpy;
	size_t				i;

	i = 0;
	str_cpy = (unsigned char *)str;
	while (i < n)
	{
		if (str_cpy[i] == (unsigned char) c)
		{
			return (str_cpy + i);
		}
		i++;
	}
	return (NULL);
}
