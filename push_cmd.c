/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:42:45 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/27 14:35:41 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_info **stack)
{
	t_node	*tmp;
	t_node	*top;

	if ((*stack)->b_len == 0)
	{
		return ;
	}
	tmp = (*stack)->b_head;
	top = (*stack)->a_head;
	tmp->prev = top->prev;
	top->prev = tmp;
	tmp->prev->next = tmp;
	tmp->next = top;
	if ((*stack)->b_len == 1)
	{
		(*stack)->b_head = NULL;
	}
	(*stack)->a_len += 1;
	(*stack)->b_len -= 1;
	write(1, "pa\n", 3);
}

void	pb(t_info **stack)
{
	t_node	*tmp;
	t_node	*top;

	if ((*stack)->a_len == 0)
	{
		return ;
	}
	tmp = (*stack)->a_head;
	top = (*stack)->b_head;
	tmp->prev = top->prev;
	top->prev = tmp;
	tmp->prev->next = tmp;
	tmp->next = top;
	if ((*stack)->b_len == 1)
	{
		(*stack)->b_head = NULL;
	}
	(*stack)->b_len += 1;
	(*stack)->a_len -= 1;
	write(1, "pb\n", 3);
}
