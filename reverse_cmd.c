/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:04:20 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/25 08:24:17 by seonggoc         ###   ########.fr       */
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
}

void	rrb(t_info **stack)
{
	if ((*stack)->a_len < 2)
	{
		return ;
	}
	(*stack)->a_head = (*stack)->a_head->prev;
}

void	rrr(t_info **stack)
{
	ft_r_rotate_a(stack);
	ft_r_rotate_b(stack);
}
