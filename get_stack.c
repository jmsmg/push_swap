/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 08:04:35 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/20 15:22:40 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
			ft_clear_node(&node, ft_delete_node());
			node = NULL;
			break;
		}
		i++;
	}
	return (node);
}

t_info	*ft_get_stack(int argc, char **argv)
{
	t_info	*stack;

	stack->a_len = argc - 1;
	stack->a_head = ft_input_arg(argc, argv);
	stack->b_len = 0;
	stack->b_head = NULL;

	return (stack);
}
