/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:28:39 by mnoskov           #+#    #+#             */
/*   Updated: 2018/04/02 14:28:41 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_copy;
	char	*src_copy;
	size_t	i;

	dst_copy = (char *)dst;
	src_copy = (char *)src;
	i = 0;
	if (dst_copy <= src_copy)
		ft_memcpy(dst_copy, src_copy, len);
	else
		i = len;
	while (i > 0)
	{
		dst_copy[i - 1] = src_copy[i - 1];
		i--;
	}
	return (dst_copy);
}
