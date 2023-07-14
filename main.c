/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:01:36 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/14 10:20:26 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	t_node	*a_stack;
	t_node	*b_stack;

	if (1 < argc && ft_check_validation(argc, argv))
	{
		// vailcheck 중복??

		// ascii -> int
		// 자료 삽입
		a_stack = ft_input_arg(argc, argv);
		// 자료 조작

		printf("OK");
	}
	else
	{
		write(1, "Error\n", 6);
		// free(node);
		// node = NULL;
	}
}
