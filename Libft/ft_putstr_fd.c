/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:53:10 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/29 22:08:23 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	size_t i;

	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
}
/*
** EXPLICAÇÃO:
** Esta função escreve uma string 's' num ficheiro ou saída específica (fd).
** 1. Verifica se a string não é nula para evitar erros.
** 2. Usa um ciclo 'while' para percorrer a string até ao fim ('\0').
** 3. A função 'write' envia um caractere de cada vez para o 'fd' fornecido.
** 4. O 'fd' pode ser 1 (ecrã), 2 (saída de erro) ou um ficheiro aberto.
*/