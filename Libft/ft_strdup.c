/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 14:18:53 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/29 20:33:29 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
    char *str;
    int i;

    i = 0;
    while (s[i])
    {
        i++;
    }
    str = malloc(i + 1 * sizeof(char));
    if (!str)
        return (NULL);
    i = 0;
    while (s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%s", ft_strdup("strs dsade dase"));
// }
// Conta o tamanho da string s
// pede memória suficiente com malloc
// pede memória suficiente com malloc
// adiciona o '\0' no final e devolve a nova string duplicada.