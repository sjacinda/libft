/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:14:39 by sjacinda          #+#    #+#             */
/*   Updated: 2021/10/20 20:48:49 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	size_t	i;

	if (!s)
		return (NULL);
	s2 = ft_strdup(s);
	i = 0;
	if (!s2)
		return (NULL);
	while (s2[i])
	{
		s2[i] = (*f)(i, s2[i]);
		i++;
	}
	return (s2);
}
