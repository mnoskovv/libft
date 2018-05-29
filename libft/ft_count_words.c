/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 15:47:39 by mnoskov           #+#    #+#             */
/*   Updated: 2018/04/04 17:16:46 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char *str, char c)
{
	int count;
	int i;

	count = 0;
	i = 0;
	if (str && *str)
	{
		while (str[i] != '\0')
		{
			while (str[i] == c && str[i] != '\0')
				i++;
			if (str[i] == '\0')
				return (count);
			while (str[i] != c && str[i] != '\0')
				i++;
			count++;
		}
	}
	return (count);
}
