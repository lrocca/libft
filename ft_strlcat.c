/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 16:50:25 by lrocca            #+#    #+#             */
/*   Updated: 2021/01/13 11:14:11 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	len;
	size_t	max;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	len = srclen + dstlen;
	max = dstsize;
	while (dstlen--)
		dst++;
	while (dstsize-- - 1 > srclen && srclen--)
		*dst++ = *src++;
	*dst = '\0';
	return (len > max ? max : len);
}
