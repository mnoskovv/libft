/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <mnoskov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 21:55:41 by mnoskov           #+#    #+#             */
/*   Updated: 2018/04/02 21:55:46 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(char *str)
{
	unsigned long int	result;
	int					i;
	int					sign;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_skip_spaces(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		(ft_isdigit(str[i + 1])) ? i++ : (0);
	while (ft_isdigit(str[i]))
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return ((int)result * sign);
}
