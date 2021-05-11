/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitset_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:40:08 by lrocca            #+#    #+#             */
/*   Updated: 2021/05/11 16:59:33 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wcount(const char *s, const char *c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (!ft_ischarset(*s, (char *)c))
		{
			count++;
			while (*s && !ft_ischarset(*s, (char *)c))
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_splitset(const char *s, const char *c)
{
	size_t	i;
	char	*start;
	char	**array;

	array = malloc((ft_wcount(s, (char *)c) + 1) * sizeof(char *));
	if (!s || !array)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (!ft_ischarset(*s, (char *)c))
		{
			start = (char *)s;
			while (*s && !ft_ischarset(*s, (char *)c))
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
