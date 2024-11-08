/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_cmd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:58:53 by seonggoc          #+#    #+#             */
/*   Updated: 2023/08/11 13:36:15 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_info *stack)
{
	if (stack->a_len < 2)
	{
		return ;
	}
	stack->a_head = stack->a_head->next;
	write(1, "ra\n", 3);
}

void	rb(t_info *stack)
{
	if (stack->b_len < 2)
	{
		return ;
	}
	stack->b_head = stack->b_head->next;
	write(1, "rb\n", 3);
}

void	rr(t_info *stack)
{
	if (stack->a_len < 2 || stack->b_len < 2)
	{
		return ;
	}
	stack->a_head = stack->a_head->next;
	stack->b_head = stack->b_head->next;
	write(1, "rr\n", 3);
}
