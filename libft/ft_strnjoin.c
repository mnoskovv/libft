/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 17:44:27 by mnoskov           #+#    #+#             */
/*   Updated: 2018/03/22 17:46:07 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnjoin(char const *s1, char const *s2, int n)
{
	char	*res;
	int		i;
	int		len1;

	i = 0;
	if (!s1)
	{
		if (!(res = (char *)malloc(sizeof(*res) * (n + 1))))
			return (NULL);
		res = ft_strncpy(res, s2, n);
		res[n] = 0;
		return (res);
	}
	if (!s2)
		return ((char *)s1);
	len1 = ft_strlen(s1);
	if (!(res = (char *)malloc(sizeof(*res) * (len1 + n + 1))))
		return (NULL);
	res = ft_strcpy(res, s1);
	res = ft_strncat(res, s2, n);
	return (res);
}