/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:28:51 by sjacinda          #+#    #+#             */
/*   Updated: 2021/10/22 17:49:29 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(int j, char **arr)
{
	while (j >= 0)
		free (arr[--j]);
	free (*arr);
	return (NULL);
}

static char	**ft_make_arr(char **arr, char const *s, char c, size_t word)
{
	int		i;
	size_t	j;
	int		start;

	i = 0;
	j = 0;
	start = 0;
	while (j < word)
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			start = i;
		while (s[i] && s[i] != c)
			i++;
		arr[j] = ft_substr(s, start, (i - start));
		if (arr[j] == NULL)
			return (ft_free(j, arr));
		j++;
	}
	return (arr);
}

static size_t	ft_count_words(char const *s, char c)
{
	int		i;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			word++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		word;
	char	**arr;

	if (!s)
		return (NULL);
	word = ft_count_words((char *)s, c);
	arr = (char **) malloc(sizeof(char *) * (word + 1));
	if (!arr)
		return (NULL);
	arr = ft_make_arr(arr, (char *)s, c, word);
	arr[word] = NULL;
	return (arr);
}
