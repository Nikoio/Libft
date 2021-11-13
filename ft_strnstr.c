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

char	*ft_strnstr(const char *haystack, const char *needle, unsigned long len)
{
	unsigned char	outer_iter;
	unsigned char	inner_iter;

	outer_iter = 0;
	inner_iter = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while ((*(haystack + outer_iter) != '\0') && (outer_iter < len))
	{
		while (*(haystack + outer_iter + inner_iter) == *(needle + inner_iter))
		{
			if ((outer_iter + inner_iter) == len)
				return (0);
			if (*(needle + inner_iter + 1) == '\0')
				return ((char *)(haystack + outer_iter));
			inner_iter += 1;
		}
		outer_iter += 1;
		inner_iter = 0;
	}
	return (0);
}
