/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:01:47 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/25 19:05:30 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len;
    size_t src_len;
    size_t i;
    size_t j;

    // 1. contar tamanho de dst
    dst_len = 0;
    while (dst[dst_len] != '\0')
        dst_len++;
    // 2. contar tamanho de src
    src_len = 0;
    while (src[src_len] != '\0')
        src_len++;
    // 3. se não há espaço nenhum, só devolve o que seria o tamanho total
    if (size <= dst_len)
        return (size + src_len);
    // 4. começar a copiar no fim de dst
    i = dst_len;
    j = 0;
    // 5. copiar enquanto houver espaço
    while (src[j] != '\0' && i < size - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    // 6. terminar string
    dst[i] = '\0';
    // 7. devolver tamanho total que teria
    return (dst_len + src_len);
}