#include <unistd.h>
#include "check_validation.c"

typedef struct s_node
{
    int     data;
    struct s_node  *next;
    struct s_node  *prev;
} t_node;