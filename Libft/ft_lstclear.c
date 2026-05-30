/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calberto <calberto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 20:17:35 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/30 10:47:18 by calberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_node;
	t_list	*next_node;

	if (lst == NULL || del == NULL)
	{
		return ;
	}
	current_node = *lst;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		ft_lstdelone(current_node, del);
		current_node = next_node;
	}
	*lst = NULL;
}
/*
** EXPLICAÇÃO:
** Esta função elimina e liberta a memória de todos os nós de uma lista.
** 1. Protegemos contra ponteiros nulos para evitar crashes.
** 2. Usamos uma variável 'next_node' para não perdermos o resto da lista
** quando libertamos o nó atual (free).
** 3. Chamamos a 'ft_lstdelone' repetidamente para cada elemento.
** 4. No final, colocamos a cabeça da lista (*lst) a NULL para indicar
** que a lista já não existe na memória.
*/
