/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 18:07:15 by mnoskov           #+#    #+#             */
/*   Updated: 2018/03/31 18:38:28 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		ln;
	char	buff;

	i = 0;
	if (str && *str)
	{
		ln = ft_strlen(str) - 1;
		while (i < ln)
		{
			buff = str[i];
			str[i] = str[ln];
			str[ln] = buff;
			ln--;
			i++;
		}
		return (str);
	}
	else
		return (NULL);
}
