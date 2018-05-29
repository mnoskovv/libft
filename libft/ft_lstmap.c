/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoskov <mnoskov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 14:24:44 by mnoskov           #+#    #+#             */
/*   Updated: 2018/04/02 21:43:09 by mnoskov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_node;
	t_list	*temp;

	temp = NULL;
	if (!lst || !f)
		return (NULL);
	new_node = f(lst);
	temp = new_node;
	lst = lst->next;
	while (lst)
	{
		new_node->next = f(lst);
		new_node = new_node->next;
		lst = lst->next;
	}
	return (temp);
}
