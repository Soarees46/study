/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:35:47 by carlossoare       #+#    #+#             */
/*   Updated: 2026/04/16 16:45:43 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
};

void ft_is_negative(int n)
{
    if (n < 0)
        ft_putchar('N');
    else
        ft_putchar('P');
}

/*int main(void)
{
    ft_is_negative(5);
    ft_putchar('\n');
    ft_is_negative(-2);
    ft_putchar('\n');
    ft_is_negative(0);
    ft_putchar('\n');
    return (0);
}
*/