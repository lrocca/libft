/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 11:51:30 by lrocca            #+#    #+#             */
/*   Updated: 2021/05/10 16:18:43 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	int		sign;

	sign = 0;
	len = 0;
	if (n < 0)
	{
		n *= -1;
		sign = 1;
		len++;
	}
	len += ft_numlen((unsigned int)n, 10);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (sign)
		str[0] = '-';
	while (len + 1 > (size_t)sign)
	{
		str[len--] = '0' + (n % 10);
		n /= 10;
	}
	return (str);
}
