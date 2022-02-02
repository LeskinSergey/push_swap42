/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbombadi <sbombadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:28:31 by sbombadi          #+#    #+#             */
/*   Updated: 2022/01/22 23:41:46 by sbombadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_array_sort(int *array, int argc)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < ((argc -1) - 1))
	{
		while (j < ((argc -1) - i - 1))
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		j++;
		}
		i++;
		j = 0;
	}
}

static void	ft_create_stack_and_array(int *array,
				t_list **list_a, int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		array[j] = ft_atoi(argv[i]);
		put_back(list_a, ft_atoi(argv[i]));
		i++;
		j++;
	}
}

void	ft_getting_index(t_list **list_a, int *array, int argc)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = *list_a;
	while (tmp)
	{
		while (i < argc - 1)
		{
			if (tmp->data == array[i])
				tmp->index = i;
			i++;
		}
	tmp = tmp->next;
	i = 0;
	}
}

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	int		*array;

	list_a = NULL;
	list_b = NULL;
	array = malloc(sizeof(int) * (argc - 1));
	if (!array)
		return (0);
	if (argc <= 2)
		exit(1);
	ft_check_dup(argc, argv);
	ft_create_stack_and_array(array, &list_a, argc, argv);
	ft_check_sort(&list_a, argc);
	ft_array_sort(array, argc);
	ft_getting_index(&list_a, array, argc);
	ft_go_to_sort(&list_a, &list_b, argc);
	exit (0);
}
