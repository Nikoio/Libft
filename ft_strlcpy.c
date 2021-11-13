/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mellamae <mellamae@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:52:00 by mellamae          #+#    #+#             */
/*   Updated: 2021/10/15 22:52:00 by mellamae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcpy(char *dst,
							const char *src,
							unsigned long dstsize)
{
	unsigned long	iter;

	if (!dst)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	iter = 0;
	while (iter < dstsize)
	{
		*(dst + iter) = *(src + iter);
		if (*(dst + iter) == '\0')
			return (ft_strlen(src));
		iter += 1;
	}
	*(dst + dstsize - 1) = '\0';
	return (ft_strlen(src));
}
