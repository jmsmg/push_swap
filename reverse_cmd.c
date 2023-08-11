/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:04:20 by seonggoc          #+#    #+#             */
/*   Updated: 2023/08/11 14:39:10 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_info *stack)
{
	if (stack->a_len < 2)
	{
		return ;
	}
	stack->a_head = stack->a_head->prev;
	write(1, "rra\n", 4);
}

void	rrb(t_info *stack)
{
	if (stack->b_len < 2)
	{
		return ;
	}
	stack->b_head = stack->b_head->prev;
	write(1, "rrb\n", 4);
}

void	rrr(t_info *stack)
{
	if (stack->a_len < 2 || stack->b_len < 2)
	{
		return ;
	}
	stack->b_head = stack->b_head->prev;
	stack->a_head = stack->a_head->prev;
	rrb(stack);
}
