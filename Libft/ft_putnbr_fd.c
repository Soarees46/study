/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 19:00:34 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/29 20:26:08 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        ft_putchar_fd('-', fd);
        ft_putchar_fd('2', fd);
        n = 147483648;
    }
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }
    if (n >= 10)
        ft_putnbr_fd(n / 10, fd);
    ft_putchar_fd((n % 10) + 48, fd);
}
/*
** EXPLICAÇÃO:
** Esta função imprime um número inteiro num File Descriptor.
** 1. Resolvemos o caso crítico de -2147483648 separadamente porque ele
** não pode ser transformado em positivo (causa overflow).
** 2. Se o número for negativo, escrevemos o '-' e trabalhamos com o positivo.
** 3. A recursividade (n / 10) permite-nos chegar ao primeiro dígito do número.
** 4. Ao fazer 'n + 0', transformamos o valor numérico (ex: 5) no
** caractere ASCII '5' (código 53).
*/