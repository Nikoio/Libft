/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                         :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mellamae <mellamae@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:52:00 by mellamae          #+#    #+#             */
/*   Updated: 2021/10/15 22:52:00 by mellamae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	void				*ptr;
	unsigned long		len_src;

	len_src = ft_strlen(src);
	ptr = (char *)malloc(len_src + 1);
	if (!ptr)
		return (0);
	if (ft_strlcpy(ptr, src, len_src + 1) == len_src)
		return (ptr);
	return (0);
}
