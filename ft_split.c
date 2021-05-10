/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 22:10:43 by lrocca            #+#    #+#             */
/*   Updated: 2021/05/08 18:55:55 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wcount(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	*start;
	char	**array;

	array = malloc((ft_wcount(s, c) + 1) * sizeof(char *));
	if (!s || !array)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s && *s != c)
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
