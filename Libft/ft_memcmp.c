/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:00:28 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/29 22:06:13 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

int ft_memcmp(const void *dest, const void *src, size_t n)
{
	unsigned int i;
	unsigned char *d;
	unsigned char *s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (n < 1)
		return (0);
	while ((i < n) && s[i] == d[i])
		i++;
	if (i < n)
		return (d[i] - s[i]);
	return (0);
}