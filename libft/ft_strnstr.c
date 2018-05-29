/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <mnoskov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:03:30 by mnoskov           #+#    #+#             */
/*   Updated: 2018/04/02 22:50:58 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *find, size_t len)
{
	size_t	j;
	size_t	i;

	i = 0;
	if (*find == '\0')
		return ((char*)src);
	while (i < len && *src)
	{
		j = 0;
		while (*(src + j) == find[j] && (i + j) < len &&
				find[j] != '\0' && *(src + j) != '\0')
			j++;
		if (find[j] == '\0')
			return ((char*)src);
		(src++) && (i++);
	}
	return (NULL);
}
