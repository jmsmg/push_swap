/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:10:44 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/31 19:03:09 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_info *stack)
{
	t_node	*head;
	t_node	*tmp;

	if (stack->a_len < 2)
	{
		return ;
	}
	head = stack->a_head;
	tmp = head->next;
	tmp->next->prev = head;
	head->next = tmp->next;
	tmp->next = head;
	tmp->prev = head->prev;
	head->prev->next = tmp;
	head->prev = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_info *stack)
{
	t_node	*head;
	t_node	*tmp;

	if (stack->a_len < 2)
	{
		return ;
	}
	head = stack->b_head;
	tmp = head->next;
	tmp->next->prev = head;
	head->next = tmp->next;
	tmp->next = head;
	tmp->prev = head->prev;
	head->prev->next = tmp;
	head->prev = tmp;
	write(1, "sb\n", 3);
}

void	ss(t_info *stack)
{
	sa(stack);
	sb(stack);
}
