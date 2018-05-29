/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <mnoskov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 21:39:39 by mnoskov           #+#    #+#             */
/*   Updated: 2018/04/02 21:51:17 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int ch)
{
	while (*s != ch)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char*)s);
}
