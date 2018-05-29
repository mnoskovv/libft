/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 13:55:03 by mnoskov           #+#    #+#             */
/*   Updated: 2018/03/30 15:26:32 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		pr(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

char			*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	int				end;
	char			*copy;

	if (!s)
		return (NULL);
	end = ft_strlen(s);
	i = 0;
	j = 0;
	while (pr(s[i]))
		i++;
	while (pr(s[--end]))
		j++;
	end = ft_strlen(s);
	copy = (char *)malloc(sizeof(*copy) * (end - i - j + 1));
	if (!copy)
		return (NULL);
	end = 0;
	while (i < ft_strlen(s) - j)
		copy[end++] = s[i++];
	copy[end] = '\0';
	return (copy);
}
