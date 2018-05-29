/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 20:17:59 by mnoskov           #+#    #+#             */
/*   Updated: 2018/03/29 20:18:05 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*copy;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	copy = (char *)malloc(sizeof(*copy) * (len + 1));
	if (!copy)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		copy[i] = s[start];
		start++;
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
