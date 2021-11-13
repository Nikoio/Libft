/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mellamae <mellamae@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:52:00 by mellamae          #+#    #+#             */
/*   Updated: 2021/10/15 22:52:00 by mellamae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned long n)
{
	unsigned long	iterator;
	int				diff;

	iterator = 0;
	diff = 0;
	while (iterator < n)
	{
		diff = (int)(*(unsigned char *)(s1 + iterator)
				- *(unsigned char *)(s2 + iterator));
		if ((diff != 0) || (*(s1 + iterator) == '\0'))
			return (diff);
		iterator += 1;
	}
	return (diff);
}
