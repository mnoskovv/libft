/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <mnoskov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:21:20 by mnoskov           #+#    #+#             */
/*   Updated: 2018/04/02 18:20:30 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getnumofdigits(int n)
{
	int count;
	int sign;

	count = 0;
	sign = 0;
	if (n < 0)
		sign = 1;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count + sign);
}

char		*ft_itoa(int n)
{
	char	*cpy;
	int		arr[2];

	cpy = NULL;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	arr[0] = 0;
	arr[1] = getnumofdigits(n);
	if (!(cpy = (char *)malloc(sizeof(*cpy) * (getnumofdigits(n) + 1))))
		return (NULL);
	if (n < 0)
	{
		cpy[0] = '-';
		n = -n;
		arr[0] = 1;
	}
	cpy[arr[1]] = '\0';
	while (--arr[1] >= arr[0])
		(cpy[arr[1]] = n % 10 + '0') && (n /= 10);
	return (cpy);
}
