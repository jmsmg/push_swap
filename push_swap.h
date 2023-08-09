/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:01:40 by seonggoc          #+#    #+#             */
/*   Updated: 2023/08/09 12:30:18 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
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

int			ft_check_validation(int argc, char **argv);
int			ft_check_number(char *word);
int			ft_check_dup(int argc, char **argv);
int			ft_check_array(int *array, int size);

t_info		*ft_get_stack(int argc, char **argv);
t_node		*ft_input_arg(int argc, char **argv);
void		ft_data_to_idx(t_node *node, int size, int *array);

int			*ft_get_sorted_number(int size, char **argv);
int			*ft_get_array(int size, char **argv);
void		ft_swap(int *a, int *b);

t_node		*ft_created_node(int data);
int			ft_add_next_node(t_node *head, int data);
void		ft_delete_node(t_node *node);
void		ft_clear_node(t_node *node, void (*del)(t_node *cur));

void		sa(t_info *stack);
void		sb(t_info *stack);
void		ss(t_info *stack);

void		pa(t_info *stack);
void		pb(t_info *stack);

void		ra(t_info *stack);
void		rb(t_info *stack);
void		rr(t_info *stack);

void		rra(t_info *stack);
void		rrb(t_info *stack);
void		rrr(t_info *stack);

void		ft_sort(t_info *stack, int pivot_a, int pivot_b);
void		a_to_b(t_info *stack, int pivot_a, int pivot_b);
void		b_to_a(t_info *stack);
int			check_rb_or_rrb(t_node *b, int max, int len, int flag);
void		execute_cmd(t_info *stack, int rb_cnt, int rrb_cnt);
int			find_max(t_node *b, int len);

int			ft_check_except_case(t_info *stack, int size);
int			size_two_case(t_info *stack);
int			size_three_case(t_info *stack, t_node *a);

#endif

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void		ft_error(void);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
size_t		ft_strlen(const char *s);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strdup(const char *s1);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
long long	ft_atoi(const char *str);
#endif
