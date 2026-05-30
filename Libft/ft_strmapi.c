/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calberto <calberto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:45:08 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/30 09:56:44 by calberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// O que ft_strmapi faz
// Recebe uma string s
// Recebe uma função f
// Cria uma nova string com malloc
// Aplica f a cada caractere da string
// Passa o índice e o caractere para f
// Guarda o resultado na nova string
// Retorna a nova string no fim
// Se falhar o malloc, retorna NULL
// Cria uma nova string onde cada letra é transformada
// por uma função, usando também o índice da letra.
