#include "push_swap.h"

int ft_check_number(char *word)
{
    int i;
    int sign;

    i = 0;
    sign = 0;
    while (word[i] == '-' && word[i] == '+')
    {
        if (word[i] == '-' || word[i] == '+')
        {
            sign += 1;
        }
        i++;
    }
    while (word[i])
    {
        
    }
    if (ft_atoi(word[i]) > -2147483648 && 2147483647 < ft_atoi(word[i]))
    {
        // 예외
    }
    return (1);
}

int ft_check_validation(int argc, char **argv)
{
    int     i;
    int     j;
    char    **word;

    i = 1;
    while (i < argc)
    {
        word = ft_split(argv[i], ' ');
        j = 0;
        while (word[j])
        {
            ft_check_number(word[j]);

            j++;
        }
        i++;
    }
    return (1);
}