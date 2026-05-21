/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:20:33 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/19 17:54:15 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *dest;
    size_t i;

    dest = (unsigned char *)b;
    i = 0;
    while (i < len)
    {
        dest[i] = (unsigned char)c;
        i++;
    }
    return (b);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str[] = "HELLO WORLD";

//     printf("Antes: %s\n", str);

//     memset(str, 'A', 5);

//     printf("Depois: %s\n", str);

//     return 0;
// }