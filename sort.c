/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbombadi <sbombadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:25:40 by sbombadi          #+#    #+#             */
/*   Updated: 2022/01/22 04:06:21 by sbombadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_go_to_sort(t_list **list_a, t_list **list_b, int argc)
{
	if (argc == 3)
		sa_sb_ss(list_a, list_b, 'a');
	else if (argc == 4)
		sort_for_3(list_a, list_b);
	else if (argc <= 6)
		sort_for_5(list_a, list_b, argc);
	else if (argc >= 7 && argc <= 101)
		sort_for_100(list_a, list_b, argc);
	else
		sort_for_500(list_a, list_b, argc);
}

void	sort_for_3(t_list **l1, t_list **l2)
{
	int	a;
	int	b;
	int	c;

	a = (*l1)->data;
	b = (*l1)->next->data;
	c = (*l1)->next->next->data;
	if (a > b && c > b && c > a)
		sa_sb_ss(l1, l2, 'a');
	else if (a > b && a > c && b > c)
	{
		sa_sb_ss(l1, l2, 'a');
		rra_rrb_rrr(l1, l2, 'a');
	}
	else if (a > b && c > b && a > c)
		ra_rb_rr(l1, l2, 'a');
	else if (a < b && a < c && b > c)
	{
		sa_sb_ss(l1, l2, 'a');
		ra_rb_rr(l1, l2, 'a');
	}
	else if (a < b && a > c && b > c)
		rra_rrb_rrr(l1, l2, 'a');
}

int	count_n(t_list *list)
{
	int	n;

	n = 0;
	while (list)
	{
		n++;
		list = list->next;
	}
	return (n);
}

static void	five_finish(t_list **l1, t_list **l2)
{
	sort_for_3(l1, l2);
	while (count_n(*l2) != 0)
	{
		if ((*l2)->index == 0)
			pa_pb(l1, l2, 'a');
		else
		{
			pa_pb(l1, l2, 'a');
			ra_rb_rr(l1, l2, 'a');
		}
	}
}

void	sort_for_5(t_list **l1, t_list **l2, int argc)
{
	t_list	*max_min;

	max_min = *l1;
	while (count_n(*l1) != 3)
	{
		if (max_min->index == 0)
		{
			max_min = max_min->next;
			pa_pb(l1, l2, 'b');
		}
		else if (max_min->index == argc - 2)
		{
			max_min = max_min->next;
			pa_pb(l1, l2, 'b');
		}
		else
		{
			max_min = max_min->next;
			ra_rb_rr(l1, l2, 'a');
		}
	}
	five_finish(l1, l2);
}
