/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:16:05 by seonggoc          #+#    #+#             */
/*   Updated: 2023/08/09 12:22:38 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execute_cmd(t_info *stack, int rb_cnt, int rrb_cnt)
{
	if (rb_cnt < rrb_cnt)
	{
		while (rb_cnt != 0)
		{
			rb(stack);
			rb_cnt--;
		}
	}
	else
	{
		while (rrb_cnt != 0)
		{
			rrb(stack);
			rrb_cnt--;
		}
	}
	pa(stack);
}

int		check_rb_or_rrb(t_node *b, int max, int len, int flag)
{
	int		cnt;
	t_node	*cur;

	cnt = 0;
	cur = b;
	while (cnt < len)
	{
		if (cur->data == max)
		{
			break;
		}
		if (flag == 0)
			cur = cur->next;
		else if (flag == 1)
			cur = cur->prev;
		cnt++;
	}
	return (cnt);
}

void	b_to_a(t_info *stack)
{
	int	rb_cnt;
	int	rrb_cnt;
	int	max;

	max = 0;
	while (stack->b_len != 0)
	{
		max = find_max(stack->b_head, stack->b_len);
		rb_cnt = check_rb_or_rrb(stack->b_head, max, stack->b_len, 0);
		rrb_cnt = check_rb_or_rrb(stack->b_head, max, stack->b_len, 1);
		execute_cmd(stack, rb_cnt, rrb_cnt);
	}
	while (stack->a_head->data != 0)
	{
		rra(stack);
	}
}

void	a_to_b(t_info *stack, int pivot_a, int pivot_b)
{
	while (stack->a_len != 0)
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
	// size_three_case(stack, stack->a_head);
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
