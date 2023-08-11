/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:28:57 by seonggoc          #+#    #+#             */
/*   Updated: 2023/08/11 12:24:46 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_execute(t_info *stack, int *array, int cmd)
{
	int	i;

	i = 0;
	while (cmd != 0)
	{
		ra(stack);
		i++;
	}
	i = 0;
	while (array[i] != 0)
	{
		if (0 < array[i])
			rb(stack);
		else
			rrb(stack);
	}
}

int	ft_get_cmd(t_info *stack, int *array)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < stack->a_len)
	{
		if (stack->b_len < array[i])
			continue ;
			//
		if (i <= stack->a_len / 2)
		{
			if (tmp < i + array[i])
				tmp = i;
		}
		else
		{
			if (tmp < stack->a_len - i + array[i])
				tmp = i;
		}
		i++;
	}
	return (tmp);
}
