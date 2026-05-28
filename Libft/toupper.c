/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:01:29 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/25 19:08:34 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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