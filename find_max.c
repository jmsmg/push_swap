/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 09:33:12 by seonggoc          #+#    #+#             */
/*   Updated: 2023/08/09 12:22:45 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_node *b, int len)
{
	int		i;
	int		max;
	t_node *cur;

	i = 0;
	max = 0;
	cur = b;
	while (i < len)
	{
		if (max < cur->data)
		{
			max = cur->data;
		}
		i++;
		cur = cur->next;
	}
	return (max);
}
