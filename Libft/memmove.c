/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 19:18:57 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/24 13:55:14 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

// ft_memmove copia n bytes de src para dest,
// mesmo quando as duas zonas de memória se sobrepõem.
void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *d;		// ponteiro para os bytes do destino
	const unsigned char *s; // ponteiro para os bytes da origem

	if (!dest && !src)
		return (NULL);

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;

	// Se dest estiver depois de src na memória,
	// existe risco de sobreposição.
	// Então copiamos de trás para a frente.
	if (d > s)
	{
		while (n > 0)
		{
			n--;		 // começamos no último byte
			d[n] = s[n]; // copiamos de trás para a frente
		}
		return (dest);
	}

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}

	return (dest);
}

// #include <stdio.h>
// #include <string.h> // para comparar com o memmove original
// #include "libft.h"	// a tua ft_memmove

// int main(void)
// {
// 	char texto[20] = "ABCDEFG";

// 	printf("Antes: %s\n", texto);

// 	ft_memmove(texto + 2, texto, 3);

// 	printf("Depois: %s\n", texto);

// 	return 0;
// }
