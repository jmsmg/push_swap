/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_function.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:01:26 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/14 13:06:46 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_created_node(int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->prev = new_node;
	new_node->data = data;
	new_node->next = new_node;
	return (new_node);
}

int	ft_add_next_node(t_node **head, int data)
{
	t_node	*new_node;
	t_node	*tail;

	new_node->data = data;
	tail = (*head)->prev;
	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
	{
		return (0);
	}
	tail->next = new_node;
	new_node->prev = tail;
	new_node->next = (*head);
	(*head)->prev = new_node;
	return (1);
}

void	ft_delete_node(t_node *node)
{
	free(node);
}

