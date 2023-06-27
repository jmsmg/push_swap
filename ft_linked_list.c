#include "push_swap.h"

t_node  *ft_created_node(int data)
{
    t_node  *new_node;

    new_node = (t_node*)malloc(sizeof(t_node));
    if (!new_node)
    {
        return (NULL);
    }
    t_node->data = data;
    t_node->next = NULL;
    t_node->prev = NULL;

    return (new_node);
}