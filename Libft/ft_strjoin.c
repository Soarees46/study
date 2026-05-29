/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 15:50:08 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/29 20:31:01 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len; // vai guardar o tamanho total da nova string
    char *str;  // vai apontar para a string final (resultado)

    if (!s1 || !s2) // se uma das strings for NULL, não há nada para juntar
        return (NULL);

    len = ft_strlen(s1) + ft_strlen(s2);
    // calcula o tamanho total necessário (s1 + s2)

    str = malloc((len + 1) * sizeof(char));
    // aloca memória para os dois textos + '\0'

    if (!str) // se malloc falhar, devolve NULL
        return (NULL);

    ft_strlcpy(str, s1, len + 1);
    // copia s1 para dentro de str (começo da nova string)

    ft_strlcat(str, s2, len + 1);
    // adiciona s2 no final de str

    return (str);
    // devolve a string final (s1 + s2)
}
// Passos:
// ver se as strings existem
// calcular tamanho total
// pedir memória
// copiar s1
// adicionar s2
// devolver resultado