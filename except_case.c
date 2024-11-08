/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   except_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:50:17 by seonggoc          #+#    #+#             */
/*   Updated: 2023/08/16 16:43:57 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sorted_case(t_node *head, t_node *tail)
{
	t_node	*tmp;

	tmp = head;
	while (tmp->data != tail->data)
	{
		if ((tmp->data) + 1 != (tmp->next->data))
		{
			return (FALSE);
		}
		tmp = tmp->next;
	}
	return (TRUE);
}

int	size_three_case(t_info *stack, t_node *a)
{
	if (a->data < a->next->data && a->data < a->prev->data)
	{
		if (a->next->data < a->prev->data)
		{
			return (TRUE);
		}
		rra(stack);
	}
	else if (a->next->data < a->data && a->prev->data < a->data)
	{
		if (a->next->data < a->prev->data)
		{
			rra(stack);
		}
		else
		{
			sa(stack);
		}
	}
	if (stack->a_head->data < stack->a_head->next->data)
		rra(stack);
	else
		sa(stack);
	return (TRUE);
}

int	size_two_case(t_info *stack)
{
	if (stack->a_head->data < stack->a_head->next->data)
	{
		return (TRUE);
	}
	else
	{
		sa(stack);
		return (TRUE);
	}
}

int	ft_check_except_case(t_info *stack, int size)
{
	if (size < 2)
	{
		return (TRUE);
	}
	else if (size == 2)
	{
		return (size_two_case(stack));
	}
	else if (size == 3)
	{
		return (size_three_case(stack, stack->a_head));
	}
	return (ft_sorted_case(stack->a_head, stack->a_head->prev));
}
