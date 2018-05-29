/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <mnoskov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:21:48 by mnoskov           #+#    #+#             */
/*   Updated: 2018/04/02 21:41:11 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*new_one_list;

	new_one_list = NULL;
	new_one_list = *alst;
	if (!alst || !new)
		return ;
	*alst = new;
	new->next = new_one_list;
}
