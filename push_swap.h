/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:01:40 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/20 17:04:41 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

int	ft_check_number(char *word);
int	ft_check_validation(int argc, char **argv);

typedef struct s_node
{
	struct s_node	*prev;
	int				data;
	struct s_node	*next;
}	t_node;

typedef struct s_info
{
	int				a_len;
	struct s_node	*a_head;
	int				b_len;
	struct s_node	*b_head;
}	t_info;
#endif
