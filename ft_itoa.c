/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 11:51:30 by lrocca            #+#    #+#             */
/*   Updated: 2021/05/10 17:16:44 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = n < 0;
	if (sign)
		n *= -1;
	len = ft_numlen((unsigned int)n, 10) + sign;
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len--] = '\0';
	if (sign)
		s[0] = '-';
	while (len + 1 > (size_t)sign)
	{
		s[len--] = '0' + (n % 10);
		n /= 10;
	}
	return (s);
}
