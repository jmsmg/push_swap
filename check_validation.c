#include "push_swap.h"

int ft_check_number(char *num)
{
    int     i;
    int     j;
    int     k;
    char    word[13];

    i = 0;
    while (num[i])
    {
        j = 0;
        while (num[i] && num[i] != ' ')
            j++;
        k = 0;
        while (k < j && j < 13)
        {
            word[k] = num[i + k];
            k++;
        }
        wort[k] = '\0';
        if (ft_atoi(word) < -2147483648 || 2147483647 < ft_atoi(word))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int ft_check_validation(int argc, char **argv)
{
    int     i;
    int     result;
    char    *num;

    i = 0;
    result = 0;
    while (i < argc)
    {
        num = argv[i];
        result = ft_check_number(num);
        i++;
    }
    return (1);
}