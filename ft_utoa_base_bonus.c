/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 13:32:36 by lrocca            #+#    #+#             */
/*   Updated: 2021/05/10 16:21:41 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_utoa_base(unsigned long long n, char *radix)
{
	char	*s;
	size_t	len;
	int		base;

	base = ft_strlen(radix);
	len = ft_numlen(n, base);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	while (n)
	{
		s[--len] = radix[n % base];
		n /= base;
	}
	return (s);
}
