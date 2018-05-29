/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:20:03 by mnoskov           #+#    #+#             */
/*   Updated: 2018/04/02 14:20:14 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	size_t			i;
	unsigned char	*current;
	unsigned char	c;

	c = '\0';
	i = 0;
	if (len == 0)
		return ;
	current = (unsigned char *)s;
	while (i < len)
	{
		*current = c;
		current++;
		i++;
	}
}
