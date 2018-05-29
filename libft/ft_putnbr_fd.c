/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <mnoskov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 20:42:47 by mnoskov           #+#    #+#             */
/*   Updated: 2018/04/02 18:04:23 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	int		a[2];
	char	c;

	a[0] = 0;
	a[1] = 0;
	c = '-';
	if (n == -2147483648)
	{
		ft_putnbr_fd(-n / 10, fd);
		ft_putnbr_fd(8, fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd(c, fd);
		n = -n;
	}
	a[0] = n % 10;
	a[1] = n / 10;
	if (a[1] > 0)
		ft_putnbr_fd(a[1], fd);
	ft_putchar_fd(a[0] + '0', fd);
}
