#include "check_validation.c"

typedef struct s_node
{
    int     data;
    struct s_node  *next;
    struct s_node  *prev;
} t_node;

#define INT_MAX 2147483647
#define INT_MIN -2147483648