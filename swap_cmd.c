#include "push_swap.h"

void	ft_swap_a(t_info **stack)
{
	t_node	*head;
	t_node	*tmp;

	head = (*stack)->a_head;
	tmp = head->next;

	tmp->next->prev = head;
	head->next = tmp->next;
	tmp->next = head;
	tmp->prev = head->prev;
	head->prev->next = tmp;
	head->prev = tmp;
}

void	ft_swap_b(t_info **stack)
{
	t_node	*head;
	t_node	*tmp;

	head = (*stack)->b_head;
	tmp = head->next;

	tmp->next->prev = head;
	head->next = tmp->next;
	tmp->next = head;
	tmp->prev = head->prev;
	head->prev->next = tmp;
	head->prev = tmp;
}

void	ft_swap_double(t_info **stack)
{
	ft_swap_a(stack);
	ft_swap_b(stack);
}
