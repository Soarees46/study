/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calberto <calberto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:20:09 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/30 10:38:46 by calberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// size_t, NULL e tipos usados para manipulação de memória e tamanhos.
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// void *ft_memcpy(void *dest, const void *src, size_t n);
// int main(void)
// {
//     char src[20] = "hello world";
//     char dest[20];
//     // 1. mostrar o que está em src antes
//     printf("antes src  = %s\n", src);
//     printf("antes dest = %s\n", dest);
//     // copiar memória
//     ft_memcpy(dest, src, strlen(src) + 1);
//     // mostrar depois da cópia
//     printf("dps src  = %s\n", src);
//     printf("dps dest = %s\n", dest);
//     return 0;
// }
