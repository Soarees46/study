/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:20:09 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/29 22:07:32 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// size_t, NULL e tipos usados para manipulação de memória e tamanhos.
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	// unsigned porque estamos a tratar byte a byte e e suposto so aceitar valores positivos
	const unsigned char *s;
	size_t i;
	// é um tipo inteiro unsigned para positivos usado para representar tamanhos e contagens de memória de forma segura.
	// 1. Se não há nada para copiar, não fazemos nada
	if (dest == NULL && src == NULL)
		return (NULL);
	// 2. Transformamos em bytes (para poder copiar "um a um")
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	// estou a converter o endereço src para um ponteiro que lê a memória byte a byte, sem a poder alterar.”
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	// 5. Devolvemos o destino (como a função original faz)
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