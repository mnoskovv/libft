/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ints.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <mnoskov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 18:01:42 by mnoskov           #+#    #+#             */
/*   Updated: 2018/04/02 21:51:44 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_print_ints(int arr[], size_t s)
{
	size_t	i;

	i = 0;
	if (arr)
	{
		while (i < s)
		{
			ft_putchar('[');
			ft_putnbr(arr[i]);
			ft_putchar(']');
			i++;
		}
	}
}
