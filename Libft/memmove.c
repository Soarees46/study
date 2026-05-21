/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 19:18:57 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/21 18:14:46 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

// ft_memmove copia n bytes de src para dest,
// mesmo quando as duas zonas de memória se sobrepõem.
void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *d;       // ponteiro para os bytes do destino
    const unsigned char *s; // ponteiro para os bytes da origem

    // Se ambos forem NULL, não há nada a copiar
    if (!dest && !src)
        return (NULL);

    // Converte os ponteiros void* para unsigned char*
    // para podermos copiar byte a byte
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;

    // Se dest estiver depois de src na memória,
    // existe risco de sobreposição.
    // Então copiamos de trás para a frente.
    if (d > s)
    {
        while (n > 0)
        {
            n--;         // começamos no último byte
            d[n] = s[n]; // copiamos de trás para a frente
        }
        return (dest);
    }

    // Caso contrário, é seguro copiar normalmente (da frente para trás)
    i = 0;
    while (i < n)
    {
        d[i] = s[i]; // copia byte a byte
        i++;
    }

    return (dest); // devolve o destino, como é habitual nestas funções
}
