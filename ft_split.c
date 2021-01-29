/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 22:10:43 by lrocca            #+#    #+#             */
/*   Updated: 2021/01/24 19:38:46 by lrocca           ###   ########.fr       */
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

char		**free_all(char **array)
{
	// free(strings) one by one
	// free(array)
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	size_t	i;
	char	*start;
	char	**array;

	array = NULL;
	if ((!s) || !(array = malloc((ft_wcount(s, c) + 1) * sizeof(char*))))
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s && *s != c)
				s++;
			if (!(array[i] = malloc((s - start) + 1)))
				return (free_all(array));
			ft_strlcpy(array[i++], start, s - start + 1);
		}
		else
			s++;
	}
	array[i] = '\0';
	return (array);
}
