/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:57:19 by sjacinda          #+#    #+#             */
/*   Updated: 2021/10/20 17:21:01 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dst;
	char	*src;

	i = 0;
	dst = (char *)haystack;
	src = (char *)needle;
	if (!*src)
		return ((char *) &haystack[i]);
	while (dst[i] && i < len)
	{
		j = 0;
		while (src[j] == dst[i + j] && i + j < len)
		{
			if (src[j + 1] == '\0')
			{
				return ((char *) &dst[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
