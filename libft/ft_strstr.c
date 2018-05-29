/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <mnoskov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:19:35 by mnoskov           #+#    #+#             */
/*   Updated: 2018/04/02 22:22:55 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *src, const char *find)
{
	size_t	j;

	if (*find == '\0')
		return ((char*)src);
	while (*src)
	{
		j = 0;
		while (*(src + j) == find[j] && find[j] != '\0' && *(src + j) != '\0')
			j++;
		if (find[j] == '\0')
			return ((char*)src);
		src++;
	}
	return (NULL);
}
