/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:28:57 by seonggoc          #+#    #+#             */
/*   Updated: 2023/08/11 12:51:44 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_execute(t_info *stack, int *array, int cmd)
{
	while (array[cmd] != 0)
	{
		if (0 < array[cmd])
		{
			rb(stack);
			array[cmd]--;
		}
		else
		{
			rrb(stack);
			array[cmd]++;
		}
	}
	if (cmd < 0)
		cmd = -(cmd);
	while (cmd)
	{
		ra(stack);
		cmd--;
	}
	pa(stack);
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
		{
			i++;
			continue ;
		}
		else if (i < stack->a_len / 2)
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
