/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mellamae <mellamae@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:52:00 by mellamae          #+#    #+#             */
/*   Updated: 2021/10/15 22:52:00 by mellamae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_normalize(int c)
{
	while (c < 0)
		c += 256;
	while (c > 255)
		c -= 256;
	return (c);
}

void	*ft_memchr(const void *s, int c, unsigned long n)
{
	unsigned long	iter;

	c = ft_normalize(c);
	iter = 0;
	while (iter < n)
	{
		if (*(unsigned char *)(s + iter) == (unsigned char)c)
			return ((void *)(s + iter));
		iter += 1;
	}
	return (0);
}
