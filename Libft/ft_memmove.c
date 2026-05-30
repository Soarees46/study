/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calberto <calberto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 19:18:57 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/30 10:37:36 by calberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
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
