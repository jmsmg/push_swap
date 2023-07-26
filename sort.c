/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:16:05 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/26 11:54:31 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	a_to_b(t_info **stack)
{
	int	pivot_a;
	int	pivot_b;

	pivot_a = (*stack)->a_len * 1 / 3;
	pivot_b = (*stack)->a_len * 2 / 3;
	while ((*stack)->a_len)
	{
		if ((*stack)->a_len <= pivot_a)
		{
			pb(stack);
		}
		else if ((*stack)->a_head->data < pivot_a)
		{
			pb(stack);
			rb(stack);
		}
		else if ((*stack)->a_head->data < pivot_b)
		{
			pb(stack);
		}
		else
		{
			ra(stack);
		}
	}
}

void	ft_sort(t_info **stack)
{
	/* 사이즈 3,5 일때 ? */
	a_to_b(stack);
	b_to_a(stack);
}
