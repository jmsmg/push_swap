#include "push_swap.h"

int ft_check_number(int i, char num)
{

}

int ft_check_validation(int argc, char **argv)
{
    int     i;
    int     j;
    char    *num;

    i = 0;
    while (i < argc)
    {
        j = 0;
        num = argv[i]
        ;
        if (num[j] == NULL)
        {
            return (0);
        }
        while (num[j])
        {
            if (num[j])
            {
                return (0);
            }
            j++;
        }
        i++;
    }
    return (1);
}