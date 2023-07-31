/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:16:05 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/31 10:31:10 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	b_to_a(t_info *stack)
{
	int	top_a;
	int	top_b;

	while (stack->b_len)
	{
		top_a = stack->a_head->data;
		top_b = stack->b_head->data;
		if (top_a - 1 == top_b
			|| (top_b < top_a && stack->a_head->prev->data < top_b))
		{
			pa (stack);
		}
		else if (stack->a_head->prev->data == top_b - 1)
		{
			pa(stack);
			ra(stack);
		}
		else
			ra(stack);
	}
	while (!(stack->a_head->prev->data == (stack->a_len) - 1
			&& stack->a_head->data == 0))
	{
		ra(stack);
	}
}

void	a_to_b(t_info *stack, int pivot_a, int pivot_b)
{
	while (stack->a_len != 3)
	{
		if (stack->a_len <= pivot_a)
		{
			pb(stack);
		}
		else if (stack->a_head->data < pivot_a)
		{
			pb(stack);
			rb(stack);
		}
		else if (stack->a_head->data <= pivot_b)
		{
			pb(stack);
		}
		else
		{
			ra(stack);
		}
	}
	size_three_case(stack, stack->array);
}

void	ft_sort(t_info *stack, int pivot_a, int pivot_b)
{
	if (ft_check_except_case(stack, stack->a_len))
	{
		return ;
	}
	a_to_b(stack, pivot_a, pivot_b);
	b_to_a(stack);
}
