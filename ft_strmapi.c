/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mellamae <mellamae@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:52:00 by mellamae          #+#    #+#             */
/*   Updated: 2021/10/15 22:52:00 by mellamae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_s;
	unsigned long	i;
	unsigned long	len;

	if (s && !f)
		return ((char *)s);
	else if (!s)
		return (0);
	len = ft_strlen(s);
	new_s = ft_strdup(s);
	if (!new_s)
		return (0);
	i = 0;
	while (i < len)
	{
		*(new_s + i) = f(i, *(new_s + i));
		i++;
	}
	return (new_s);
}
