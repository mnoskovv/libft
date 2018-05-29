/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:27:16 by mnoskov           #+#    #+#             */
/*   Updated: 2018/04/02 14:27:19 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*copy1;
	unsigned char	*copy2;
	size_t			i;

	copy1 = (unsigned char *)s1;
	copy2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (copy1[i] != copy2[i])
			return (copy1[i] - copy2[i]);
		else
			i++;
	}
	return (0);
}
