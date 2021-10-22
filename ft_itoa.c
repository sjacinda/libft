/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:01:51 by sjacinda          #+#    #+#             */
/*   Updated: 2021/10/19 22:26:13 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long z)
{
	int	i;

	i = 0;
	if (z == 0)
		return (1);
	while (z)
	{
		z = z / 10;
		i++;
	}
	return (i);
}

static char	*ft_writestr(char *arr, long z, long len)
{
	if (z == 0)
	{
		arr[0] = '0';
		return (arr);
	}
	while (len--)
	{
		arr[len] = z % 10 + '0';
		z = z / 10;
	}
	return (arr);
}

char	*ft_itoa(int n)
{
	size_t	i;
	long	m;
	char	*arr;
	int		flag;

	i = 0;
	m = n;
	flag = 0;
	if (m < 0)
	{
		m = -m;
		flag = 1;
	}
	arr = ft_calloc(ft_len(m) + 1 + flag, sizeof(char));
	if (!arr)
		return (NULL);
	arr = (ft_writestr(arr, m, ft_len(m) + flag));
	if (flag)
		arr[0] = '-';
	return (arr);
}
