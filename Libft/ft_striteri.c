/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:46:26 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/29 18:47:50 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    char *str;
    size_t i;
    size_t len;

    len = ft_strlen(s);
    str = (char *)s;
    i = 0;
    while (i < len)
    {
        f(i, &s[i]);
        i++;
    }
    str[i] = '\0';
}

// Recebe uma string s
// Recebe uma função f
// Percorre cada caractere da string
// Passa o índice e o endereço do caractere para f
// A função pode modificar a string original
// Não cria nova string
// Trabalha diretamente na string recebida
// Aplica uma função em cada caractere da string, modificando a própria string original.