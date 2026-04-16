/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 15:46:40 by carlossoare       #+#    #+#             */
/*   Updated: 2026/04/16 16:32:24 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
};

void ft_print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
	ft_putchar('\n');
}

/*void ft_print_alphabet(void);

int main(void)
{
	ft_print_alphabet();
	return (0);
}*/