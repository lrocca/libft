/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 10:47:53 by lrocca            #+#    #+#             */
/*   Updated: 2021/01/12 10:57:17 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const char	*s;
	char		*d;

	s = src;
	d = dst;
	while (*s && n)
	{
		*d = *s;
		d++;
		if (*s == c)
			return (d);
		s++;
		n--;
	}
	return (NULL);
}
