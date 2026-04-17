/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:56:03 by carlossoare       #+#    #+#             */
/*   Updated: 2026/04/16 17:07:07 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

/*int main(void)
{
    int a = 5;
    int b = 0;

    printf("antes do swap: a = %d, b = %d\n", a, b);
    ft_swap(&a, &b);
    printf("depois do swap: a = %d, b = %d\n", a, b);
    return (0);
}*/