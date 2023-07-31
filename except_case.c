/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   except_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:50:17 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/31 09:44:19 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	size_three_case(t_info *stack, int *array)
{
	if (array[0] < array[1] && array[0] < array[2])
	{
		if (array[1] < array[2])
		{
			return (TRUE);
		}
		rra(stack);
	}
	else if (array[1] < array[0] && array[2] < array[0])
	{
		if (array[2] < array[1])
		{
			ra(stack);
			return (TRUE);
		}
		sa(stack);
	}
	if (array[2] < array[1] && array[2] < array[0])
		rra(stack);
	else
		sa(stack);
	return (TRUE);
}

int	size_two_case(t_info *stack, int *array)
{
	if (array[0] < array[1])
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
		return (size_two_case(stack, stack->array));
	}
	else if (size == 3)
	{
		return (size_three_case(stack, stack->array));
	}
	return (FALSE);
}
