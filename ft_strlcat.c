/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 14:06:25 by sjacinda          #+#    #+#             */
/*   Updated: 2021/10/18 18:24:44 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (n < dlen)
		return (slen + n);
	dst = dst + dlen;
	ft_strlcpy(dst, src, n - dlen);
	return (slen + dlen);
}
