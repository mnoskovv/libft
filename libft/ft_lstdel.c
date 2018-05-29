/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <mnoskov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:23:44 by mnoskov           #+#    #+#             */
/*   Updated: 2018/04/02 18:48:20 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *copy_alst;
	t_list *new_one_list;

	if (!alst || !del)
		return ;
	copy_alst = *alst;
	new_one_list = *alst;
	while (copy_alst)
	{
		new_one_list = new_one_list->next;
		del(copy_alst->content, copy_alst->content_size);
		free(copy_alst);
		copy_alst = NULL;
		copy_alst = new_one_list;
	}
	*alst = NULL;
}
