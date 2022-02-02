/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbombadi <sbombadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:20:33 by sbombadi          #+#    #+#             */
/*   Updated: 2022/01/22 23:40:56 by sbombadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_sort(t_list **list_a, int argc)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = *list_a;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
		{
			i = 1;
			break ;
		}
		tmp = tmp->next;
	}
	if (i == 0)
		exit (1);
}

void	ft_check_dup(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				exit (1);
			j++;
		}
		i++;
	}
}
