/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbombadi <sbombadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:26:49 by sbombadi          #+#    #+#             */
/*   Updated: 2022/01/22 23:42:46 by sbombadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}	t_list;

int			main(int argc, char *argv[]);
t_list		*create_elem(long int a);
void		put_back(t_list **list, long int a);
void		ft_array_sort(int *array, int argc);
long int	ft_atoi(const char *str);
void		ft_check_dup(int argc, char **argv);
void		ft_check_sort(t_list **list_a, int argc);
void		ft_go_to_sort(t_list **list_a, t_list **list_b, int argc);
void		sort_for_5(t_list **l1, t_list **l2, int argc);
void		sort_for_100(t_list **a, t_list **b, int argc);
void		sort_for_500(t_list **a, t_list **b, int argc);
void		sort_for_3(t_list **l1, t_list **l2);
void		sa_sb_ss(t_list **list_a, t_list **list_b, char c);
void		ra_rb_rr(t_list **list_a, t_list **list_b, char c);
void		rra_rrb_rrr(t_list **list_a, t_list **list_b, char c);
void		pa_pb(t_list **list_a, t_list **list_b, char c);
void		sort_for_3(t_list **l1, t_list **l2);

#endif
