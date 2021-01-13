/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 11:51:30 by lrocca            #+#    #+#             */
/*   Updated: 2021/01/13 17:29:11 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	char	*s;
	int		len;
	int		nlen;

	i = 0;
	len = 0;
	nlen = n;
	if (n < 0)
		nlen *= -1;
	while (nlen > 0)
	{
		nlen /= 10;
		len++;
	}
	if (n < 0)
		len++;
	if (!(s = (char *)malloc(len + 1)))
		return (NULL);
	while (n)
	{
		s[i] = n % 10;
		i++;
	}
	return (s);
}
