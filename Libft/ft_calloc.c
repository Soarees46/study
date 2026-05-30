/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calberto <calberto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 14:17:43 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/30 10:44:51 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*memory;
	size_t			total_bytes;
	size_t			index;

	if (nmemb != 0 && size > (size_t)-1 / nmemb)
		return (NULL);
	total_bytes = nmemb * size;
	memory = malloc(total_bytes);
	if (memory == NULL)
		return (NULL);
	index = 0;
	while (index < total_bytes)
	{
		memory[index] = 0;
		index++;
	}
	return (memory);
}
/*
** EXPLICAÇÃO:
** Esta função aloca memória para um array e inicializa-a a zero.
** 1. Recebe o número de elementos (count) e o tamanho de cada um (size).
** 2. Usa o 'malloc' para reservar o bloco total de memória necessário.
** 3. Se a alocação for bem-sucedida, utiliza a 'ft_bzero' para preencher
** todos os bytes com '\0' (zero).
** 4. A principal diferença para o malloc comum é que a calloc garante que
** a memória venha "limpa", evitando bugs com valores residuais.
*/
