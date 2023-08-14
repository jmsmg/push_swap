/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:16:05 by seonggoc          #+#    #+#             */
/*   Updated: 2023/08/14 12:22:46 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_cnt_rotate(t_info *stack, t_node *a)
{
	int	i;
	int	tmp;
	t_node *b;

	i = 0;
	tmp = stack->b_len + 1;
	b = stack->b_head;
	while (i < stack->b_len)
	{
		if (a->prev->data < b->data && b->data < a->data)
		{
			if (stack->b_len / 2 < i && tmp < -(stack->b_len - i))
				tmp = -(stack->b_len - i);
			else if (i <= stack->b_len / 2 && i < tmp)
				tmp = i;
		}
		else if (a->prev->data > a->data
			&& (b->data < a->data || a->prev->data < b->data))
		{
			if (stack->b_len / 2 < i && tmp < -(stack->b_len - i))
				tmp = -(stack->b_len - i);
			else if (i <= stack->b_len / 2 && i < tmp)
				tmp = i;
		}
		b = b->next;
		i++;
	}
	return (tmp);
}

void	ft_find_optimal(t_info *stack)
{
	int	i;
	int	tmp;
	int	array[stack->a_len + stack->b_len];
	t_node	*a;

	i = 0;
	a = stack->a_head;
	while (i < stack->a_len)
	{
		array[i] = check_cnt_rotate(stack, a);
		a = a->next;
		i++;
	}
	tmp = ft_get_cmd(stack, array);
	ft_execute(stack, array, tmp);
}

void	b_to_a(t_info *stack)
{

	while (stack->b_len != 0)
	{
		ft_find_optimal(stack);
	}
	while (stack->a_head->data != 0)
	{
		rra(stack);
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
	size_three_case(stack, stack->a_head);
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
