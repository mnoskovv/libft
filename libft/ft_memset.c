/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:28:57 by mnoskov           #+#    #+#             */
/*   Updated: 2018/04/02 14:28:59 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*current;

	i = 0;
	if (n == 0)
	{
		return (s);
	}
	current = (unsigned char *)s;
	while (i < n)
	{
		*current = (unsigned char)c;
		current++;
		i++;
	}
	return (s);
}
