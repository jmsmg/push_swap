/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:04:20 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/28 12:26:19 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_info **stack)
{
	if ((*stack)->a_len < 2)
	{
		return ;
	}
	(*stack)->a_head = (*stack)->a_head->prev;
	write(1, "rra\n", 4);
}

void	rrb(t_info **stack)
{
	if ((*stack)->a_len < 2)
	{
		return ;
	}
	(*stack)->a_head = (*stack)->a_head->prev;
	write(1, "rrb\n", 4);
}

void	rrr(t_info **stack)
{
	rra(stack);
	rrb(stack);
}
