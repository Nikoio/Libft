/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                         :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mellamae <mellamae@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:52:00 by mellamae          #+#    #+#             */
/*   Updated: 2021/10/15 22:52:00 by mellamae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*subs;
	unsigned long	len_s1;
	unsigned long	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	subs = (char *)malloc(len_s1 + len_s2 + 1);
	if (!subs)
		return (0);
	if (ft_strlcpy(subs, s1, len_s1 + 1) == len_s1)
		if (ft_strlcat(subs, s2, len_s1 + len_s2 + 1) == (len_s1 + len_s2))
			return (subs);
	return (0);
}
