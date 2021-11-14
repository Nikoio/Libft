/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                           :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mellamae <mellamae@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:52:00 by mellamae          #+#    #+#             */
/*   Updated: 2021/10/15 22:52:00 by mellamae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_order(int n)
{
	int	order;

	order = 1;
	while ((n > 9) || (n < -9))
	{
		n /= 10;
		order++;
	}
	return (order);
}

static short	ft_sign(short is_neg)
{
	if (is_neg == 1)
		return (-1);
	else if (is_neg == 0)
		return (1);
	else
		return (0);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			order;
	short		is_neg;
	int			i;

	order = ft_order(n);
	is_neg = (n < 0);
	str = (char *)malloc(is_neg + order + 1);
	if (!str)
		return (0);
	if (is_neg)
		str[0] = '-';
	else
		str[0] = '0';
	i = is_neg + order;
	str[i--] = '\0';
	while (n)
	{
		str[i--] = (char)(ft_sign(is_neg) * (n % 10) + '0');
		n /= 10;
	}
	return (str);
}
