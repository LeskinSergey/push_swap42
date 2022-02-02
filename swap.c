/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbombadi <sbombadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:06:03 by sbombadi          #+#    #+#             */
/*   Updated: 2022/01/22 23:42:22 by sbombadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(t_list **list)
{
	t_list	*a;
	t_list	*b;

	a = *list;
	b = (*list)->next;
	a->next = (*list)->next->next;
	b->next = a;
	*list = b;
}

void	sa_sb_ss(t_list **list_a, t_list **list_b, char c)
{
	if (c == 'a')
	{
		ft_swap(list_a);
		write(1, "sa\n", 3);
	}
	else if (c == 'b')
	{
		ft_swap(list_b);
		write(1, "sb\n", 3);
	}
	else
	{
		ft_swap(list_a);
		ft_swap(list_b);
		write(1, "ss\n", 3);
	}
}
