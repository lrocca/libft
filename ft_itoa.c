/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 11:51:30 by lrocca            #+#    #+#             */
/*   Updated: 2021/01/18 11:03:47 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(unsigned int n)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int				len;
	char			*str;
	int				sign;
	unsigned int	nb;

	sign = 1;
	len = ft_numlen((unsigned int)n);
	nb = n;
	if (n < 0)
	{
		nb *= -1;
		sign = 0;
		len = ft_numlen(nb) + 1;
	}
	if (!(str = (char *)malloc(len + 1)))
		return (0);
	str[len] = 0;
	if (!sign)
		str[0] = '-';
	str[--len] = '0' + (nb % 10);
	while (nb /= 10)
		str[--len] = '0' + (nb % 10);
	return (str);
}
