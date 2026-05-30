/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calberto <calberto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:55:10 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/30 10:37:04 by calberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
	write(fd, "\n", 1);
}
/*
** EXPLICAÇÃO:
** Esta função escreve uma string seguida de uma nova linha num File Descriptor.
** 1. Primeiro, valida se a string 's' não é nula.
** 2. Chama a função 'ft_putstr_fd' para escrever o texto propriamente dito.
** 3. No fim, usa o 'write' para imprimir o '\n', garantindo que o
** próximo texto apareça na linha de baixo.
*/
