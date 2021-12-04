/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:12:50 by sjacinda          #+#    #+#             */
/*   Updated: 2021/12/04 15:58:57 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (0);
	i = ft_strlen(s);
	if (i < len)
		len = i;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[start + i] && (start + i) < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	size_t	j;
// 	char	*s2;

// 	i = 0;
// 	j = 0;
// 	if (!s)
// 		return (NULL);
// 	if (len > ft_strlen(s))
// 		len = ft_strlen(s);
// 	if (len == 0 || start > ft_strlen(s))
// 		return (ft_strdup(""));
// 	s2 = (char *) malloc(sizeof(*s) * (len + 1));
// 	if (!s2)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		if (i >= start && j < len)
// 			s2[j++] = s[i];
// 		i++;
// 	}
// 	s2[j] = '\0';
// 	return (s2);
// }