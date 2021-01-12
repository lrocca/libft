/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 16:50:25 by lrocca            #+#    #+#             */
/*   Updated: 2021/01/12 19:04:22 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	len;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	len = srclen + dstlen;
	while (dstlen--)
		dst++;
	while (srclen-- && dstsize--)
	{
		*dst++ = *src++;
	}
	return (len);
}
