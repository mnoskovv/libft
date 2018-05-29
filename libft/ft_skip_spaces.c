/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_spaces.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <mnoskov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 17:01:56 by mnoskov           #+#    #+#             */
/*   Updated: 2018/04/02 18:18:49 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_skip_spaces(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
	{
		return (1);
	}
	else if (c == '\v' || c == '\r' || c == '\f')
	{
		return (1);
	}
	else
		return (0);
}