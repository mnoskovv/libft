/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 21:39:39 by mnoskov           #+#    #+#             */
/*   Updated: 2018/03/22 21:39:44 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int sym)
{
	if (ft_strchr(str, sym) == NULL)
		return (NULL);
	while (*str)
		str++;
	while (*str != sym)
		str--;
	return ((char *)str);
}
