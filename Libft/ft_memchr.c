/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:00:26 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/29 22:04:05 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *arr;

	i = 0;
	arr = (unsigned char *)s;
	while (i < n)
	{
		if (arr[i] == (unsigned char)c)
			return (&arr[i]);
		i++;
	}
	return (NULL);
}