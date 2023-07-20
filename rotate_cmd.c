/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_cmd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:58:53 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/20 15:14:11 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_info **stack)
{
	if ((*stack)->a_len < 2)
	{
		return ;
	}
	(*stack)->a_head = (*stack)->a_head->prev;
}

void	ft_rotate_b(t_info **stack)
{
	if ((*stack)->b_len < 2)
	{
		return ;
	}
	(*stack)->b_head = (*stack)->b_head->prev;
}

void	ft_rotate_double(t_info **stack)
{
	ft_rotate_a(stack);
	ft_rotate_b(stack);
}
