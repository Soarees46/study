/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 20:21:28 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/29 22:02:59 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	/* 1. Verificamos se a lista existe e se a função f não é nula */
	if (lst == NULL || f == NULL)
	{
		return;
	}
	/* 2. Enquanto o ponteiro lst não chegar ao fim da lista (NULL) */
	while (lst != NULL)
	{
		/* Aplicamos a função f ao conteúdo do nó atual */
		f(lst->content);
		/* Avançamos para o próximo nó */
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