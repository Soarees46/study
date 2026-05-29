/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 13:24:18 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/29 21:59:22 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// #include <unistd.h>
//
// int main(void)
// {
//     char str[] = "HELLO WORLD";
//
//     printf("Antes: %s\n", str);
//
//     ft_bzero(str, 5);
//
//     printf("Depois: %s\n", str);
//
//     return 0;
// }