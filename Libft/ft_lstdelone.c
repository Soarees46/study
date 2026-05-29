/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 19:38:17 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/29 19:40:32 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst == NULL || del == NULL)
    {
        return;
    }
    del(lst->content);
    free(lst);
}
/* 1. Verificamos se o nó existe e se a função de limpeza foi fornecida */
/* 2. Usamos a função 'del' para limpar o conteúdo do nó */
/* 3. Libertamos a memória do nó em si */