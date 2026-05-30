/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calberto <calberto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:51:34 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/30 10:36:08 by calberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
** EXPLICAÇÃO:
** Esta função envia um único caractere para um File Descriptor (fd) específico.
** 1. Ela não precisa de verificações de NULL porque um 'char' não é um ponteiro.
** 2. A função 'write' é uma "system call" que faz o trabalho pesado.
** 3. Passamos '&c' porque o 'write' precisa de saber a localização do dado,
** não o valor do dado diretamente.
*/
