/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:01:40 by seonggoc          #+#    #+#             */
/*   Updated: 2023/08/16 18:17:19 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"
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

void	ft_error(void);

int		ft_check_validation(int argc, char **argv);
int		ft_check_number(char *word);
int		ft_check_dup(int argc, char **argv);
int		ft_check_array(int *array, int size);

t_info	*ft_get_stack(int argc, char **argv);
t_node	*ft_input_arg(int argc, char **argv);
void	ft_data_to_idx(t_node *node, int size, int *array);

int		*ft_get_sorted_number(int size, char **argv);
int		*ft_get_array(int size, char **argv);
void	ft_swap(int *a, int *b);

t_node	*ft_created_node(int data);
int		ft_add_next_node(t_node *head, int data);
void	ft_delete_node(t_node *node);
void	ft_clear_node(t_node *node, void (*del)(t_node *cur));
void	sa(t_info *stack);
void	sb(t_info *stack);
void	ss(t_info *stack);
void	pa(t_info *stack);
void	pb(t_info *stack);
void	ra(t_info *stack);
void	rb(t_info *stack);
void	rr(t_info *stack);
void	rra(t_info *stack);
void	rrb(t_info *stack);
void	rrr(t_info *stack);

void	ft_sort(t_info *stack, int pivot_a, int pivot_b);
void	a_to_b(t_info *stack, int pivot_a, int pivot_b);
void	b_to_a(t_info *stack);
int		check_cnt_rotate(t_info *stack, t_node *a, t_node *b);
void	ft_execute(t_info *stack, int *array, int cmd);
int		ft_get_cmd(t_info *stack, int *array);

int		ft_check_except_case(t_info *stack, int size);
int		size_two_case(t_info *stack);
int		size_three_case(t_info *stack, t_node *a);
int		ft_sorted_case(t_node *head, t_node *tail);
#endif
