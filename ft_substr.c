/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:12:50 by sjacinda          #+#    #+#             */
/*   Updated: 2021/10/20 21:18:36 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s2;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (len == 0 || start > ft_strlen(s))
		return (ft_strdup(""));
	s2 = (char *) malloc(sizeof(*s) * (len + 1));
	if (!s2)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			s2[j++] = s[i];
		i++;
	}
	s2[j] = '\0';
	return (s2);
}
