#include "push_swap.h"

t_node	*ft_input_arg(int argc, char **argv)
{
	int		i;
	t_node	*node;

	node = ft_created_node(ft_atoi(argv[1]));
	if (!node)
	{
		return (NULL);
	}
	i = 2;
	while (i < argc)
	{
		if (ft_add_next_node(node, ft_atoi(argv[i])))
		{
			// 리스트 전체 삭제
			break;
		}
		i++;
	}
	return (node);
}
