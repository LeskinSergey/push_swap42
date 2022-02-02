/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbombadi <sbombadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:25:17 by sbombadi          #+#    #+#             */
/*   Updated: 2022/01/22 23:41:11 by sbombadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_elem(long int a)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	elem->data = a;
	elem->next = NULL;
	return (elem);
}

void	put_back(t_list **list, long int a)
{
	t_list	*new_elem;
	t_list	*tmp;

	if (*list)
	{
		new_elem = create_elem(a);
		tmp = *list;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_elem;
	}
	else
		*list = create_elem(a);
}
