/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mellamae <mellamae@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:52:00 by mellamae          #+#    #+#             */
/*   Updated: 2021/10/15 22:52:00 by mellamae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned long n)
{
	unsigned long	iter;
	int				diff;

	iter = 0;
	diff = 0;
	while (iter < n)
	{
		diff = (int)(*(unsigned char *)(s1 + iter)
				- *(unsigned char *)(s2 + iter));
		if (diff != 0)
			return (diff);
		iter += 1;
	}
	return (diff);
}
