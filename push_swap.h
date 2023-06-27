#include "check_validation.c"

typedef struct s_node
{
    struct s_node  *prev;
    int             data;
    struct s_node  *next;   
} t_node;

#define INT_MAX 2147483647
#define INT_MIN -2147483648