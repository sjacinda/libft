/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:34:24 by sjacinda          #+#    #+#             */
/*   Updated: 2021/12/04 16:00:02 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s3;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	s3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!s3)
		return (NULL);
	i = -1;
	while (s1[++i])
		s3[i] = s1[i];
	j = -1;
	while (s2[++j])
		s3[i + j] = s2[j];
	free(s1);
	s3[i + j] = '\0';
	return (s3);
}

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	size_t	i;
// 	char	*s3;

// 	i = 0;
// 	if (!s2 || !s1)
// 		return (NULL);
// 	s3 = (char *) malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
// 	if (!s3)
// 		return (NULL);
// 	while (*s1)
// 		s3[i++] = *s1++;
// 	while (*s2)
// 		s3[i++] = *s2++;
// 	s3[i] = '\0';
// 	return (s3);
// }
