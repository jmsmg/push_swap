/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:28:57 by seonggoc          #+#    #+#             */
/*   Updated: 2023/08/16 19:14:50 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_execute(t_info *stack, int *array, int cmd)
{
	int	tmp;

	tmp = cmd;
	while (cmd && cmd < stack->a_len / 2 && 0 < array[tmp])
	{
		rr(stack);
		array[tmp]--;
		cmd--;
	}
	while (array[tmp] < 0 && stack->a_len / 2 < cmd)
	{
		rrr(stack);
		array[tmp]++;
		cmd++;
	}
	while (array[tmp] != 0)
	{
		if (array[tmp] < 0)
		{
			rrb(stack);
			array[tmp]++;
		}
		else if (0 < array[tmp])
		{
			rb(stack);
			array[tmp]--;
		}
	}
	while (0 < cmd && cmd < stack->a_len)
	{
		if (cmd <= stack->a_len / 2)
		{
			ra(stack);
			cmd--;
		}
		else if (stack->a_len / 2 < cmd)
		{
			rra(stack);
			cmd++;
		}
		else
			break ;
	}
	if (stack->b_len != 0)
		pa(stack);
}

int	ft_get_cmd(t_info *stack, int *array, int i)
{
	int	cmd;
	int	tmp;

	cmd = 0;
	tmp = 2147483647;
	while (i < stack->a_len)
	{
		if (stack->b_len < array[i])
		{
			i++;
			continue ;
		}
		else if (i <= stack->a_len / 2 && i + array[i] < tmp)
		{
			tmp = i + array[i];
			cmd = i;
		}
		else if (stack->a_len / 2 < i && stack->a_len - i + array[i] < tmp)
		{
			tmp = stack->a_len - i + array[i];
			cmd = i;
		}
		i++;
	}
	return (cmd);
}
