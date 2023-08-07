/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:10:44 by seonggoc          #+#    #+#             */
/*   Updated: 2023/08/07 12:11:05 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_info *stack)
{
	if (stack->a_len < 2)
	{
		return ;
	}
	ft_swap(&stack->a_head->data, &stack->a_head->next->data);
	write(1, "sa\n", 3);
}

void	sb(t_info *stack)
{
	if (stack->b_len < 2)
	{
		return ;
	}
	ft_swap(&stack->b_head->data, &stack->b_head->next->data);
	write(1, "sb\n", 3);
}

void	ss(t_info *stack)
{
	sa(stack);
	sb(stack);
}
