/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100_500.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbombadi <sbombadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 04:05:14 by sbombadi          #+#    #+#             */
/*   Updated: 2022/01/22 23:36:52 by sbombadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	search_max(t_list **b, int i)
{
	t_list	*tmp;
	int		n;

	n = 0;
	tmp = *b;
	while (tmp)
	{
		if (tmp->index == i)
			break ;
		tmp = tmp->next;
		n++;
	}
	return (n);
}

static void	sort_b(t_list **a, t_list **b, int argc)
{
	int	max_i;
	int	half;
	int	place;

	max_i = argc - 2;
	while (*b)
	{
		half = (max_i + 1) / 2;
		place = search_max(b, max_i);
		if ((*b)->index == max_i)
		{
			pa_pb(a, b, 'a');
			max_i--;
		}
		else if (place <= half && (*b)->index != max_i)
			ra_rb_rr(a, b, 'b');
		else if (place > half && (*b)->index != max_i)
			rra_rrb_rrr(a, b, 'b');
	}
}

void	sort_for_100(t_list **a, t_list **b, int argc)
{
	int	i;

	i = 0;
	while (*a)
	{
		if ((*a)->index <= i && i > 1)
		{
			pa_pb(a, b, 'b');
			ra_rb_rr(a, b, 'b');
			i++;
		}
		else if ((*a)->index <= (i + 15))
		{
			pa_pb(a, b, 'b');
			i++;
		}
		else if ((*a)->index >= i)
			ra_rb_rr(a, b, 'a');
	}
	sort_b(a, b, argc);
}

void	sort_for_500(t_list **a, t_list **b, int argc)
{
	int	i;

	i = 0;
	while (*a)
	{
		if ((*a)->index <= i && i > 1)
		{
			pa_pb(a, b, 'b');
			ra_rb_rr(a, b, 'b');
			i++;
		}
		else if ((*a)->index <= (i + 30))
		{
			pa_pb(a, b, 'b');
			i++;
		}
		else if ((*a)->index >= i)
			ra_rb_rr(a, b, 'a');
	}
	sort_b(a, b, argc);
}
