/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlossoares <carlossoares@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 14:01:36 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/26 11:15:48 by carlossoare      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *p;

    i = 0;
    p = 0;
    while (s[i] != '\0')
    {
        if (s[i] == (char)c)
            p = (char *)&s[i];
        i++;
    }
    if (s[i] == (char)c)
        return ((char *)&s[i]);
    return (p);
}