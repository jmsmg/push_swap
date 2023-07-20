/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:42:45 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/20 14:56:28 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_a(t_info **stack)
{
	t_node	*tmp;
	t_node	*top;

	if (!(*stack)->b_len)
	{
		return ;
	}
	tmp = (*stack)->b_head;
	top = (*stack)->a_head;
	tmp->prev = top->prev;
	top->prev = tmp;
	tmp->prev->next = tmp;
	tmp->next = top;
}

void	ft_push_b(t_info **stack)
{
	t_node	*tmp;
	t_node	*top;

	if (!(*stack)->a_len)
	{
		return ;
	}
	tmp = (*stack)->a_head;
	top = (*stack)->b_head;
	tmp->prev = top->prev;
	top->prev = tmp;
	tmp->prev->next = tmp;
	tmp->next = top;
}
