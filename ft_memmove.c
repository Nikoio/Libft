/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mellamae <mellamae@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:52:00 by mellamae          #+#    #+#             */
/*   Updated: 2021/10/15 22:52:00 by mellamae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_go_front(void *dst, const void *src, unsigned long num)
{
	unsigned i = 0;
	while (i < num)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i += 1;
	}
	return (dst);
}

static void	*ft_go_back(void *dst, const void *src, unsigned long num)
{
	while (num > 0)
	{
		*(char *)(dst + (num - 1)) = *(char *)(src + (num - 1));
		num -= 1;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, unsigned long num)
{
	if (dst != src)
	{
		if ((src > dst)
			&& (dst + num > src))
		{
			dst = ft_go_front(dst, src, num);
		}
		else if ((src < dst)
			&& (src + num >= dst))
		{
			dst = ft_go_back(dst, src, num);
		}
		else
		{
			ft_memcpy(dst, src, num);
		}
	}
	return (dst);
}
