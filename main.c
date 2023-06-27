#include "push_swap.h"

int main(int argc, char *argv[])
{
    t_node  *node;

    node = ft_created_node(0);
    if (1 < argc && ft_check_validation(argc, argv, node))
    {

    }
    else
    {
        write(1, "Error\n", 6);
        free(node);
        node = NULL;
    }
}