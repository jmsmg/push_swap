/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:01:36 by seonggoc          #+#    #+#             */
/*   Updated: 2023/08/03 15:26:57 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_info	*stack;

	if (argc < 2 || !ft_check_validation(argc, argv))
	{
		return (write(2, "Error\n", 6));
	}
	stack = ft_get_stack(argc, argv);
	if (!(stack->a_head))
	{
		return (write(2, "Error\n", 6));
	}
	ft_sort(stack, stack->a_len * 1 / 3, stack->a_len * 2 / 3);
}
