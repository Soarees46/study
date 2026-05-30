/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calberto <calberto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 19:27:28 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/30 10:45:08 by calberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
** Esta função percorre a lista para encontrar o último nó.
** 1. Se a lista estiver vazia (NULL), retorna NULL.
** 2. O ciclo 'while' avança o ponteiro 
enquanto o PRÓXIMO nó (lst->next) existir.
** 3. Quando o 'next' for NULL, significa que 
estamos no último nó, e retornamos esse endereço.
*/
