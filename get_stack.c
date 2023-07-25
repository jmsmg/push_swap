/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 08:04:35 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/25 10:54:07 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_data_to_idx(t_node *node, int size, int *array)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (node->data == array[j])
			{
				node->data = j;
			}
			j++;
		}
		node = node->next;
		i++;
	}
}

t_node	*ft_input_arg(int argc, char **argv)
{
	int		i;
	t_node	*node;

	node = ft_created_node(ft_atoi(argv[argc - 1]));
	if (!node)
	{
		return (NULL);
	}
	i = 2;
	while (i < argc)
	{
		if (!ft_add_next_node(node, ft_atoi(argv[argc - i - 2])))
		{
			ft_clear_node(&node, ft_delete_node(node));
			node = NULL;
			break ;
		}
		i++;
	}
	return (node);
}

t_info	*ft_get_stack(int argc, char **argv, int *array)
{
	int		*array;
	t_info	*stack;

	stack->a_len = argc - 1;
	stack->a_head = ft_input_arg(argc, argv);
	stack->b_len = 0;
	stack->b_head = NULL;
	array = ft_get_sorted_number(argc - 1, argv);
	if (!array)
	{
		return (NULL);
	}
	ft_data_to_idx(stack->a_head, stack->a_len, array);
	free(array);
	array = NULL;
	return (stack);
}
