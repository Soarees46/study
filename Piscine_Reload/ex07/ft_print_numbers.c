/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 15:46:40 by carlossoare       #+#    #+#             */
/*   Updated: 2026/04/16 16:33:02 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
};

void ft_print_numbers(void)
{
    char num;

    num = '0';
    while (num <= '9')
    {
        ft_putchar(num);
        num++;
    }
    ft_putchar('\n');
}

/*void ft_print_numbers(void);

int main(void)
{
    ft_print_numbers();
    return (0);
}
*/