/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 12:30:23 by jterrazz          #+#    #+#             */
/*   Updated: 2026/04/16 17:13:25 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

/*int main(void)
{
    int a = 10;
    int b = 3;
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);
    printf(" resultado da divisão: %d\n", div);
    printf("o resto da divisao: %d\n", mod);
    return (0);
}*/