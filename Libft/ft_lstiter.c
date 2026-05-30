/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calberto <calberto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 20:21:28 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/30 10:46:01 by calberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
	{
		return ;
	}
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
** EXPLICAÇÃO:
** Esta função percorre toda a lista e aplica a função 'f' em cada nó.
** 1. Se a lista ou a função 'f' forem nulas, a função para imediatamente.
** 2. O ciclo 'while' percorre cada elemento.
** 3. 'f(lst->content)' executa a operação desejada no conteúdo do nó atual.
** 4. 'lst = lst->next' move-nos para o próximo elemento até ao fim da lista.
*/
