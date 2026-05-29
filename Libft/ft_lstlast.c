/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 19:27:28 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/29 20:20:54 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
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
** 2. O ciclo 'while' avança o ponteiro enquanto o PRÓXIMO nó (lst->next) existir.
** 3. Quando o 'next' for NULL, significa que estamos no último nó, e retornamos esse endereço.
*/