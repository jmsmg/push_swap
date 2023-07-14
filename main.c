/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:01:36 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/14 14:33:39 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst	*ft_get_stack(int argc, char **argv)
{
	t_lst	*stack;

	stack->a_len = argc - 1;
	stack->a_head = ft_input_arg(argc, argv);
}

int main(int argc, char *argv[])
{
	t_lst *stack;

	if (argc < 2 && !ft_check_validation(argc, argv))
	{
		write(1, "Error\n", 6);
	}
	stack = ft_get_stack(argc, argv);
	if (!(stack->a_head))
	{
		write(1, "Error\n", 6);
	}

	// 자료 조작
	write(1, "OK", 2);
}

