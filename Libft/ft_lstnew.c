/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calberto <calberto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 19:14:01 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/30 10:44:49 by calberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}
/*
** EXPLICAÇÃO:
** Esta função cria um novo nó para uma lista ligada.
** 1. Usa o 'malloc' para reservar espaço na memória para um 't_list'.
** 2. Se o computador não tiver memória suficiente,
retorna NULL para evitar erros.
** 3. Define o 'content' com o valor passado e, MUITO IMPORTANTE, coloca
** o ponteiro 'next' a NULL, indicando que este nó ainda está isolado.
*/
