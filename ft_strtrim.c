/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:42:35 by sjacinda          #+#    #+#             */
/*   Updated: 2021/10/19 22:58:40 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*s2;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1);
	while (s1[i] && ft_strrchr(set, s1[i]))
		i++;
	while (j && ft_strrchr(set, s1[j]))
		j--;
	if (j == 0)
		return (ft_strdup(""));
	s2 = ft_substr(s1, i, j - i + 1);
	return (s2);
}
