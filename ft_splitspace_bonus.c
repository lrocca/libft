/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitspace_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:46:11 by lrocca            #+#    #+#             */
/*   Updated: 2021/05/11 15:48:47 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wcount(const char *s)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (!ft_isspace(*s))
		{
			count++;
			while (*s && !ft_isspace(*s))
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_splitspace(const char *s)
{
	size_t	i;
	char	*start;
	char	**array;

	array = malloc((ft_wcount(s) + 1) * sizeof(char *));
	if (!s || !array)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (!ft_isspace(*s))
		{
			start = (char *)s;
			while (*s && !ft_isspace(*s))
				s++;
			array[i] = malloc((s - start) + 1);
			if (!array[i])
				return (NULL);
			ft_strlcpy(array[i++], start, s - start + 1);
		}
		else
			s++;
	}
	array[i] = 0;
	return (array);
}
