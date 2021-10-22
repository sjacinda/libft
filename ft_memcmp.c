/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:43:38 by sjacinda          #+#    #+#             */
/*   Updated: 2021/10/17 13:40:58 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*arr1;
	unsigned char	*arr2;

	i = 0;
	arr1 = (unsigned char *)s1;
	arr2 = (unsigned char *)s2;
	while (i < n)
	{
		if (arr1[i] != arr2[i])
			return (arr1[i] - arr2[i]);
		i++;
	}
	return (0);
}
