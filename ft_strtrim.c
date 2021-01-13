/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 16:13:18 by lrocca            #+#    #+#             */
/*   Updated: 2021/01/13 16:21:43 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinboth(char a, char const *set)
{
	while (*set)
	{
		if (a == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	size_t	j;
	size_t	k;
	char	*ptr;

	i = 0;
	if (*s1 == 0)
		return (ptr = 0);
	len = ft_strlen(s1);
	j = len - 1;
	k = 0;
	while (ft_isinboth(s1[i], set) && s1[i])
		i++;
	while (ft_isinboth(s1[j], set) && s1[j])
		j--;
	if (!(ptr = malloc(len - i - (len - j) + 1)))
		return (0);
	while (i <= j)
		ptr[k++] = s1[i++];
	ptr[i] = 0;
	return (ptr);
}
