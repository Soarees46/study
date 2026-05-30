/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calberto <calberto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 17:16:03 by carlossoare       #+#    #+#             */
/*   Updated: 2026/05/30 10:48:29 by calberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static size_t	ft_wordconter(char const *s, char c)
{
	size_t	count;
	int		is_word;

	count = 0;
	is_word = 0;
	while (*s)
	{
		if (*s != c && !is_word)
		{
			is_word = 1;
			count++;
		}
		else if (*s == c)
			is_word = 0;
		s++;
	}
	return (count);
}

static void	*ft_cleaner(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*word_start;
	size_t	i;

	if (!s)
		return (NULL);
	res = (char **)malloc((ft_wordconter(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		word_start = (char *)s;
		while (*s && *s != c)
			s++;
		res[i] = ft_substr(word_start, 0, s - word_start);
		if (!res[i++])
			return (ft_cleaner(res));
	}
	res[i] = NULL;
	return (res);
}
// #include <stdio.h>
// int	main()
// {
// 	char	**qualquer = ft_split("ola,como,voce,esta", ',');
// 	int	i = 0;
// 	while (qualquer[i])
// 	{
// 		printf("%s\n", qualquer[i]);
// 		free(qualquer[i]);
// 		i++;
// 	}
// 	free(qualquer);
// }
