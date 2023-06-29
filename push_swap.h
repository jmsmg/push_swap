#include "check_validation.c"

typedef struct s_node
{
    struct s_node  *prev;
    int             data;
    struct s_node  *next;   
} t_node;

typedef struct s_lst
{
    int             len;
    struct s_node   *head;
} t_lst;

#define INT_MAX 2147483647
#define INT_MIN -2147483648