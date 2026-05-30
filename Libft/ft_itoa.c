/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 17:53:15 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/30 10:48:25 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static	int ft_nbrlen(int n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;

	len = ft_nbrlen(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	nb = n;
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
/*
** EXPLICAÇÃO:
** 1. ft_nbrlen: Conta os caracteres necessários. Se for <= 0, começa em 1
** (para o '0' ou o '-'). Depois divide por 10 até chegar a zero.
** 2. malloc: Reserva memória para os dígitos + o terminador '\0'.
** 3. nb = n: Usamos 'long' para evitar o erro do limite negativo (INT_MIN).
** 4. Ciclo while: Extraímos o último dígito com '% 10', convertemos para
** char somando '0', e colocamos na string de trás para a frente.
*/
