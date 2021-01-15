/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 17:45:30 by lrocca            #+#    #+#             */
/*   Updated: 2021/01/15 15:28:11 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

int	main(void)
{
	// ft_strncmp
	// char s1[] = "ciaoone\0";
	// char s2[] = "ciaoone\200";
	// int n = 500;
	// printf("sys: %d\nft:  %d\n", strncmp(s1, s2, n), ft_strncmp(s1, s2, n));

	// ft_strlcpy
	char *b = "ciaoasnwewe";
	char c[10];
	char d[10];
	printf("sys: %zu\nmin: %zu\n", strlcpy(c, b, 0), ft_strlcpy(d, b, 0));
	printf("src: %s\nsys: %s\nmin: %s\n", b, c, d);

	// ft_memccpy
	// char *s = "012345";
	// char d[] = "ooooooooo";
	// printf("src: %s\n", s);
	// printf("dst: %s\n", d);
	// printf("out: %s\ndst: %s\n", (char *)ft_memccpy(d, s, '9', 15), d);
	// return (0);

	// ft_strlcat
	// char s[0];
	// char d[10] = "56564";
	// char d2[10] = "56564";
	// int max = 0;
	// printf("src: %s\n", s);
	// printf("dst: %s\n", d);
	// printf("sys: %zu\td: %s\n", strlcat(d, s, max), d);
	// printf("ft : %zu\td: %s\n", ft_strlcat(d2, s, max), d2);

	// ft_putstr_fd("ciao\n", 1);

	// ft_split
	// printf("%d\n", ft_countwords("    prima    seconda terza   quarta ", ' '));

	// printf("%d", ft_wlen("    seconda terza   quarta ", ' '));

	// char **s = ft_split("    prima    seconda terza   quarta  ", ' ');
	// for(int i = 0; s[i] != '\0'; i++) printf("%d\t%s\n", i, s[i]);

}
