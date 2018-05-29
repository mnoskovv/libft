/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_sizes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 15:50:58 by mnoskov           #+#    #+#             */
/*   Updated: 2018/03/30 15:51:02 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_get_sizes(int *sizes, char *str, char c)
{
	int j;
	int k;
	int i;

	i = 0;
	k = 0;
	if (*sizes && str && c != '\0')
		while (str[i] != '\0')
		{
			while (str[i] == c && str[i] != '\0')
				i++;
			j = i;
			while (str[i] != c && str[i] != '\0')
				i++;
			sizes[k++] = i - j;
		}
}
