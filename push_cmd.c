/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:42:45 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/31 15:14:47 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_info *stack)
{
	t_node	*tmp;

	if (stack->b_len == 0)
	{
		return ;
	}
	tmp = stack->b_head;
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;

	if (!(stack->a_head))
	{
		stack->b_head = tmp;
		stack->b_head->next = tmp;
		stack->b_head->prev = tmp;
	}
	stack->a_head->prev->next = tmp;
	tmp->prev = stack->a_head->prev;

	stack->a_head->next->prev = tmp;
	tmp->next = stack->a_head;
	stack->a_head = tmp;
	stack->a_len += 1;
	stack->b_len -= 1;
	write(1, "pa\n", 3);
}

void	pb(t_info *stack)
{
	t_node	*tmp;

	if (stack->a_len == 0)
	{
		return ;
	}
	tmp = stack->a_head;
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;

	if (!(stack->b_head))
	{
		stack->b_head = tmp;
		stack->b_head->next = tmp;
		stack->b_head->prev = tmp;
	}
	stack->b_head->prev->next = tmp;
	tmp->prev = stack->b_head->prev;

	stack->b_head->next->prev = tmp;
	tmp->next = stack->b_head;
	stack->b_head = tmp;
	if (stack->b_len == 1)
	{
		stack->b_head = NULL;
	}
	stack->b_len += 1;
	stack->a_len -= 1;
	write(1, "pb\n", 3);
}
