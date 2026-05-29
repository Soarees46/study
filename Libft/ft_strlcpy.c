/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:01:12 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/25 18:54:22 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t len;
	size_t i;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
		return (len);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

// #include <stdio.h>
// #include "libft.h"

// int main(void)
// {
//     char src[] = "hello world";
//     char dst[6];

//     ft_strlcpy(dst, src, 6);

//     printf("%s\n", src);
//     printf("%s\n", dst);

//     return (0);
// }