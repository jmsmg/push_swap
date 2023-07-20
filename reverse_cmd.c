/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:04:20 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/20 16:11:14 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_r_reverse_rotate_a(t_info **stack)
{
	if ((*stack)->a_len < 2)
	{
		return ;
	}
	(*stack)->a_head = (*stack)->a_head->prev;
}

void	ft_r_rotate_b(t_info **stack)
{
	if ((*stack)->a_len < 2)
	{
		return ;
	}
	(*stack)->a_head = (*stack)->a_head->prev;
}

void	ft_r_rotate_double(t_info **stack)
{
	ft_r_rotate_a(stack);
	ft_r_rotate_b(stack);
}
