/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:01:29 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/29 21:02:17 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
    // se for uma letra minúscula
    if (c >= 'a' && c <= 'z')
    {
        // converte para maiúscula
        c = c - 32;
    }
    // devolve o resultado (alterado ou não)
    return (c);
}