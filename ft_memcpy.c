/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mellamae <mellamae@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:52:00 by mellamae          #+#    #+#             */
/*   Updated: 2021/10/15 22:52:00 by mellamae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst,
				   const void *src,
				   unsigned long num)
{
	if (!dst && !src)
		return (0);
	while (num > 0)
	{
		*(char *)(dst + (num - 1)) = *(char *)(src + (num - 1));
		num -= 1;
	}
	return (dst);
}
