/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 20:17:35 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/29 20:27:40 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *current_node;
    t_list *next_node;

    if (lst == NULL || del == NULL)
    {
        return;
    }
    current_node = *lst;
    while (current_node != NULL)
    {
        // Guardamos o próximo antes de apagar o atual
        next_node = current_node->next;
        // Apagamos o nó atual
        ft_lstdelone(current_node, del);
        // Avançamos para o próximo
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