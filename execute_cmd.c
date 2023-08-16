/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:28:57 by seonggoc          #+#    #+#             */
/*   Updated: 2023/08/16 17:56:26 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb_rrb(t_info *stack, int *array)
{
	while (*array != 0)
	{
		if (*array < 0)
		{
			rrb(stack);
			(*array)++;
		}
		else if (0 < *array)
		{
			rb(stack);
			(*array)--;
		}
	}
}

int	ft_rr_rrr(t_info *stack, int *array, int cmd)
{
	while (cmd && cmd < stack->a_len / 2 && 0 < *array)
	{
		rr(stack);
		(*array)--;
		cmd--;
	}
	while (*array < 0 && stack->a_len / 2 < cmd)
	{
		rrr(stack);
		(*array)++;
		cmd++;
	}
	return (cmd);
}

void	ft_execute(t_info *stack, int *array, int cmd)
{
	int	tmp;

	tmp = cmd;
	cmd = ft_rr_rrr(stack, array + tmp, cmd);
	ft_rb_rrb(stack, array + tmp);
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
	pa(stack);
}

int	ft_get_cmd(t_info *stack, int *array)
{
	int	i;
	int	cmd;
	int	tmp;

	i = 0;
	cmd = 0;
	tmp = 2147483647;
	while (i < stack->a_len)
	{
		if (stack->b_len < array[i])
		{
			i++;
			continue ;
		}
		else if (i <= stack->a_len / 2)
		{
			if (i + array[i] < tmp)
			{
				tmp = i + array[i];
				cmd = i;
			}
		}
		else if (stack->a_len / 2 < i)
		{
			if (stack->a_len - i + array[i] < tmp)
			{
				tmp = stack->a_len - i + array[i];
				cmd = i;
			}
		}
		i++;
	}
	return (cmd);
}
