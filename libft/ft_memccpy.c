/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:25:44 by mnoskov           #+#    #+#             */
/*   Updated: 2018/04/02 14:25:46 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dest_copy;
	unsigned char	*src_copy;
	size_t			i;

	dest_copy = (unsigned char *)dest;
	src_copy = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_copy[i] = src_copy[i];
		if (src_copy[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
