CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
OBJS = $(SRCS:.c=.o)
LIBFT_PATH = libft
SRCS = push_swap.c check_validation.c except_case.c execute_cmd.c \
		get_sorted_number.c get_stack.c push_cmd.c reverse_cmd.c \
		rotate_cmd.c sort.c swap_cmd.c t_node_function.c

%.o: %.c
	$(CC) $(CFLAGS) -I $(LIBFT_PATH) -o $@ -c $<

$(NAME): $(OBJS)
	cd libft && make
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_PATH)/libft.a -o $(NAME)

all : $(NAME)

clean :
	cd libft && make clean
	rm -f $(OBJS)

fclean : clean
	cd libft && make fclean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
