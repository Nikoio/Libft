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
							unsigned long size)
{
	unsigned long	iter;

	if (!dst || !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	iter = 0;
	while (iter < size)
	{
		*(dst + iter) = *(src + iter);
		if (*(src + iter) == '\0')
			return (ft_strlen(src));
		iter += 1;
	}
	*(dst + size - 1) = '\0';
	return (ft_strlen(src));
}
