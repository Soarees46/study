/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 15:41:30 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/29 21:02:54 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    size_t i;
    size_t s_len;

    /* se s for NULL, não há nada para fazer */
    if (!s)
        return (NULL);
    /* se start estiver fora da string, devolve string vazia */
    i = 0;
    while (s[i])
        i++;
    if (start >= i)
    {
        sub = malloc(1);
        if (!sub)
            return (NULL);
        sub[0] = '\0';
        return (sub);
    }

    /* ajustar len se passar do fim da string */
    if (len > i - start)
        len = i - start;

    /* alocar memória para substring + '\0' */
    sub = malloc(len + 1);
    if (!sub)
        return (NULL);

    /* copiar caracteres */
    s_len = 0;
    while (s_len < len)
    {
        sub[s_len] = s[start + s_len];
        s_len++;
    }

    /* fechar string */
    sub[s_len] = '\0';

    return (sub);
}
// 1. conta a string
// sabe o tamanho de s
// 2. verifica se start é válido
// se estiver fora → devolve ""
// 3. ajusta len
// não pode passar do fim da string
// 4. malloc
// cria nova string
// 5. copia
// copia de s[start] até len
// 6. termina com \0