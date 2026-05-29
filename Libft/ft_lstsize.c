/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 19:25:32 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/29 20:30:35 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while (lst != NULL)
    {
        i++;
        lst = lst->next;
    }
    return (i);
}
/*
** EXPLICAÇÃO:
** Esta função conta o número de elementos numa lista ligada.
** 1. Começamos com um contador a zero.
** 2. Se a lista já for NULL de início, o ciclo não corre e retorna 0 (correto).
** 3. O ciclo 'while' percorre a lista nó por nó: cada vez que entra,
** soma 1 ao contador e avança para o 'next'.
** 4. Quando atinge o final da lista (NULL), para e devolve o valor acumulado.
*/