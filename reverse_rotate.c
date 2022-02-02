/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbombadi <sbombadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:06:14 by sbombadi          #+#    #+#             */
/*   Updated: 2022/01/19 00:53:37 by sbombadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*find_pre_last(t_list *list)
{
	t_list	*pre_last;

	pre_last = NULL;
	if (list && list->next)
	{
		pre_last = list;
		while (pre_last->next->next)
			pre_last = pre_last->next;
	}
	return (pre_last);
}

static void	ft_reverse_rotate(t_list **list)
{
	t_list	*pre_last;
	t_list	*last;
	t_list	*tmp;

	if (*list && (*list)->next)
	{
		tmp = *list;
		pre_last = find_pre_last(*list);
		last = pre_last->next;
		pre_last->next = NULL;
		last->next = tmp;
		*list = last;
	}
}

void	rra_rrb_rrr(t_list **list_a, t_list **list_b, char c)
{
	if (c == 'a')
	{
		ft_reverse_rotate(list_a);
		write(1, "rra\n", 4);
	}
	else if (c == 'b')
	{
		ft_reverse_rotate(list_b);
		write(1, "rrb\n", 4);
	}
	else
	{
		ft_reverse_rotate(list_a);
		ft_reverse_rotate(list_b);
		write(1, "rrr\n", 4);
	}
}
