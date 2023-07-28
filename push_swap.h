/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:01:40 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/28 12:45:20 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

# define TRUE 1
# define FALSE 0

typedef struct s_node
{
	struct s_node	*prev;
	int				data;
	struct s_node	*next;
}	t_node;

typedef struct s_info
{
	int				*array;
	int				a_len;
	struct s_node	*a_head;
	int				b_len;
	struct s_node	*b_head;
}	t_info;

int		ft_check_validation(int argc, char **argv);
int		ft_check_number(char *word);
int		ft_check_dup(int argc, char **argv);
int		ft_check_array(int *array, int size);

int		ft_check_array(int *array, int size);
t_node	*ft_input_arg(int argc, char **argv);
void	ft_data_to_idx(t_node *node, int size, int *array);

void	pa(t_info **stack);
void	pb(t_info **stack);

void	ra(t_info **stack);
void	rb(t_info **stack);
void	rr(t_info **stack);

void	rra(t_info **stack);
void	rrb(t_info **stack);
void	rrr(t_info **stack);

void	ft_sort(t_info *stack, int pivot_a, int pivot_b);
void	a_to_b(t_info *stack, int pivot_a, int pivot_b);
void	b_to_a(t_info *stack, int pivot_a, int pivot_b);

int		ft_check_except_case(t_info *stack, int size);
int		size_three_case(t_info *stack, int *array);
int		size_two_case(t_info *stack, int *array);
#endif
