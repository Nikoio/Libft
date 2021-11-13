/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                          :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mellamae <mellamae@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:52:00 by mellamae          #+#    #+#             */
/*   Updated: 2021/10/15 22:52:00 by mellamae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static short	ft_is_substr_start(char const *s, int i, char c)
{
	if (((s[i] != c) && (i == 0))
		|| ((s[i] != c) && (i > 0) && (s[i - 1] == c)))
		return (1);
	else
		return (0);
}

static short	ft_is_substr_end(char const *s, int i, char c)
{
	if (((s[i] != c) && !(s[i + 1]))
		|| ((s[i] != c) && (s[i + 1]) && (s[i + 1] == c)))
		return (1);
	else
		return (0);
}

static int	ft_count_substrs(char const *s, char c)
{
	unsigned int	cnt;
	unsigned int	i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		if (ft_is_substr_start(s, i, c))
			cnt++;
		i++;
	}
	return (cnt);
}

static char	**ft_malloc_substrs(char const *s, char c)
{
	int		substrs_len;
	char	**substrs;

	substrs_len = ft_count_substrs(s, c);
	substrs = (char **)malloc(sizeof(char **) * (substrs_len + 1));
	if (!substrs)
		return (0);
	substrs[substrs_len] = 0;
	return (substrs);
}

char	**ft_split(char const *s, char c)
{
	int				i;
	int				j;
	int				substr_start;
	char			**substrs;

	i = -1;
	j = -1;
	substrs = ft_malloc_substrs(s, c);
	while (substrs != NULL && s[++i])
	{
		if (ft_is_substr_start(s, i, c))
			substr_start = i;
		if (ft_is_substr_end(s, i, c))
		{
			substrs[++j] = ft_substr(s, substr_start, (i - substr_start + 1));
			if (!substrs[j])
			{
				while (j >= 0)
					free(substrs[j--]);
				free(substrs);
				return (0);
			}
		}
	}
	return (substrs);
}
