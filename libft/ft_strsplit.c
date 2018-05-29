/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <mnoskov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 15:55:45 by mnoskov           #+#    #+#             */
/*   Updated: 2018/04/02 17:16:29 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_assign_words(char *str, char **s, char c)
{
	int j;
	int k;
	int i;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c && str[i] != '\0')
			i++;
		if (str[i] == '\0')
			break ;
		j = 0;
		while (str[i] != c && str[i] != '\0')
			s[k][j++] = str[i++];
		s[k][j] = '\0';
		k++;
	}
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str_array;
	int		num_wrds;
	int		*arr;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	num_wrds = ft_count_words((char *)s, c);
	if (!(arr = (int *)malloc(sizeof(int) * (num_wrds + 1))))
		return (NULL);
	ft_get_sizes(arr, (char *)s, c);
	if (!(str_array = malloc(sizeof(char*) * (num_wrds + 1))))
		return (NULL);
	while (i < num_wrds)
	{
		if (!(str_array[i] = malloc(sizeof(char*) * (arr[i] + 1))))
			return (NULL);
		i++;
	}
	ft_assign_words((char *)s, str_array, c);
	str_array[i] = NULL;
	return (str_array);
}
