/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:42:45 by seonggoc          #+#    #+#             */
/*   Updated: 2023/08/16 16:53:08 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_info *stack)
{
	t_node	*tmp;

	tmp = stack->b_head;
	if (stack->a_len == 0)
		return ;
	stack->b_head = stack->b_head->next;
	if (stack->b_len == 1)
		stack->b_head = NULL;
	stack->a_len += 1;
	stack->b_len -= 1;
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	if (!(stack->a_head))
	{
		stack->a_head = tmp;
		stack->a_head->next = tmp;
		stack->a_head->prev = tmp;
	}
	else
	{
		tmp->prev = stack->a_head->prev;
		tmp->next = stack->a_head;
		stack->a_head->prev = tmp;
		tmp->prev->next = tmp;
		stack->a_head = tmp;
	}
	write(1, "pa\n", 3);
}



void	pb(t_info *stack)
{
	t_node	*tmp;

	tmp = stack->a_head;
	if (stack->a_len == 0)
		return ;
	stack->a_head = stack->a_head->next;
	if (stack->a_len == 1)
		stack->a_head = NULL;
	stack->b_len += 1;
	stack->a_len -= 1;
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	if (!(stack->b_head))
	{
		stack->b_head = tmp;
		stack->b_head->next = tmp;
		stack->b_head->prev = tmp;
	}
	else
	{
		tmp->prev = stack->b_head->prev;
		tmp->next = stack->b_head;
		stack->b_head->prev = tmp;
		tmp->prev->next = tmp;
		stack->b_head = tmp;
	}
	write(1, "pb\n", 3);
}
