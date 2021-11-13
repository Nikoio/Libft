/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mellamae <mellamae@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:52:00 by mellamae          #+#    #+#             */
/*   Updated: 2021/10/15 22:52:00 by mellamae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcat(char *dst,
							const char *src,
							unsigned long size)
{
	unsigned long	iter;
	unsigned long	dst_len;

	if (!dst || !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	iter = 0;
	while (dst_len + iter < size)
	{
		*(dst + dst_len + iter) = *(src + iter);
		if (*(src + iter) == '\0')
			return (ft_strlen(src) + dst_len);
		iter += 1;
	}
	if (size <= dst_len)
		return (size + ft_strlen(src));
	else
		*(dst + dst_len + iter - 1) = '\0';
	return (dst_len + ft_strlen(src));
}
