/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 19:20:02 by sjacinda          #+#    #+#             */
/*   Updated: 2021/10/20 12:41:17 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dst;
	if (s1 == s2)
		return (dst);
	if (s1 < s2)
	{
		while (len--)
			s2[len] = s1[len];
	}
	else
	{
		while (i < len)
		{
			s2[i] = s1[i];
			i++;
		}
	}
	return (dst);
}
