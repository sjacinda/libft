/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:30:47 by sjacinda          #+#    #+#             */
/*   Updated: 2021/10/19 21:34:20 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long int	i;
	int					sign;

	i = 0;
	sign = 1;
	while ((*str == 32) || (*str > 8 && *str < 14))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		i = i * 10 + (*str - '0');
		str++;
	}
	if (sign == 1 && i >= 9223372036854775807u)
		return (-1);
	if (sign == -1 && i >= 9223372036854775808u)
		return (0);
	return (i * sign);
}
