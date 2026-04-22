/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calberto <calberto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:03:48 by calberto          #+#    #+#             */
/*   Updated: 2026/04/20 16:18:21 by calberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen (char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return(i);
}

/*int main (void)
{
    printf("Carlos: %d", ft_strlen("Carlos"));
}*/