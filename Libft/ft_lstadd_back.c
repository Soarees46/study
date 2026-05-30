/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calberto <calberto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 19:33:43 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/30 10:52:53 by calberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (lst == NULL || new == NULL)
	{
		return ;
	}
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		last_node = ft_lstlast(*lst);
		last_node->next = new;
	}
}
/*
** EXPLICAÇÃO:
** Esta função coloca o nó 'new' no final da lista.
** 1. Se não houver endereço da lista ou não houver novo nó, sai.
** 2. Se a lista estiver vazia, o novo nó torna-se o primeiro.
** 3. Caso contrário, encontra o último e liga o novo no fim.
*/
