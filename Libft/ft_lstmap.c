/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 20:48:33 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/29 22:03:26 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *new_node;
	void *temp_content;

	new_list = NULL;
	while (lst != NULL)
	{
		temp_content = f(lst->content);		// 1. Transforma o conteúdo
		new_node = ft_lstnew(temp_content); // 2. Cria o novo nó
		if (!new_node)
		{
			del(temp_content);			 // 3. SE falhar, apaga o conteúdo com 'del'
			ft_lstclear(&new_list, del); // 4. Apaga a lista nova
			return (NULL);				 // 5. Sai com erro
		}
		ft_lstadd_back(&new_list, new_node); // 6. Junta à lista
		lst = lst->next;					 // 7. Próximo nó
	}
	return (new_list);
}
/*
** EXPLICAÇÃO:
** A ft_lstmap cria uma cópia transformada de uma lista.
** 1. Ela usa 'f' para transformar o conteúdo de cada nó.
** 2. Ela usa 'ft_lstnew' para criar novos nós com esse conteúdo.
** 3. Se algo falhar (ex: falta de memória), ela usa 'del' para destruir
** o conteúdo órfão e 'ft_lstclear' para limpar a nova lista incompleta.
** 4. É a função mais segura, pois garante que não há leaks mesmo em falhas.
*/