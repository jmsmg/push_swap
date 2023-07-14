/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:01:36 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/14 13:09:46 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	t_node	*a_stack;
	t_node	*b_stack;

	if (1 < argc && ft_check_validation(argc, argv))
	{
		a_stack = ft_input_arg(argc, argv);
		if (!a_stack)
		{
			// malloc 실패
		}
		// 자료 조작
		write(1, "OK", 2);
	}
	else
	{
		write(1, "Error\n", 6);
		// free(node);
		// node = NULL;
	}
}
