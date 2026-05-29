/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:35:24 by calberto          #+#    #+#             */
/*   Updated: 2026/05/29 21:59:42 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
// #include <stdio.h>

// int ft_isalnum(int c);

// int main(void)
// {
//     printf("%d\n", ft_isalnum('A'));
//     printf("%d\n", ft_isalnum('9'));
//     printf("%d\n", ft_isalnum('@'));

//     return 0;
// }