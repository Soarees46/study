/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calberto <calberto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 19:20:36 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/30 10:47:30 by calberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
** EXPLICAÇÃO:
** Esta função coloca o nó 'new' no início da lista.
** 1. Primeiro, protegemos a função contra ponteiros nulos.
** 2. Ligamos o novo nó à lista atual: o 'next' do 'new' recebe o
** endereço do atual primeiro nó (*lst).
** 3. Atualizamos o ponteiro inicial (*lst) para que o 'new' seja
** oficialmente o novo primeiro elemento.
*/
