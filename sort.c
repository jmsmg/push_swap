/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:16:05 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/27 16:08:06 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	b_to_a(t_info *stack, int pivot_a, int pivot_b)
{
	t_node	*a_top;
	t_node	*b_top;

	pa(&stack);
	while (stack->b_len)
	{
		a_top = stack->a_head;
		b_top = stack->b_head;
		if (b_top->data < a_top->data || a_top->prev->data < b_top->data)
		{
			pa(&stack);
		}
		else
		{

		}

	}
}

void	a_to_b(t_info *stack, int pivot_a, int pivot_b)
{
	while (stack->a_len)
	{
		if (stack->a_len <= pivot_a)
		{
			pb(&stack);
		}
		else if (stack->a_head->data < pivot_a)
		{
			pb(&stack);
			rb(&stack);
		}
		else if (stack->a_head->data <= pivot_b)
		{
			pb(&stack);
		}
		else
		{
			ra(&stack);
		}
	}
}

void	ft_sort(t_info *stack, int pivot_a, int pivot_b)
{
	if (ft_execpt_case(stack, stack->a_len))
	{
		return ;
	}
	a_to_b(stack->a_head, pivot_a, pivot_b);
	b_to_a(stack->a_head, pivot_a, pivot_b);
}
