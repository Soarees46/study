/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 15:55:50 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/29 20:31:05 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start; // posição do primeiro carácter "válido"
    size_t end;   // posição do fim da string (ajustado)

    if (!s1 || !set) // se alguma string for NULL, não dá para trabalhar
        return (NULL);

    start = 0;

    while (ft_strchr(set, s1[start]) != NULL)
        // enquanto o carácter atual estiver no "set"
        // avançamos o início da string
        start++;

    end = ft_strlen(s1);
    // começamos no fim da string
    while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
        // enquanto o carácter do fim estiver no "set"
        // recuamos o fim da string
        end--;

    return (ft_substr(s1, start, end - start));
    // cria nova string desde start até (end - start)
}
// 1. anda do início até achar algo fora do set
// 2. anda do fim até achar algo fora do set
// 3. recorta o meio