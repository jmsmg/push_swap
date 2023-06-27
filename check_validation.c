#include "push_swap.h"

int ft_check_number(char *word)
{
    int     sign;
    size_t  i;

    i = 0;
    sign = 0;
    while (word[i] == '-' || word[i] == '+')
    {
        sign += 1;
        i++;
    }
    while (ft_isdigit(word[i]))
        i++;
    if (ft_strlen(word) != i || 1 < sign || 11 < i)
        return (0);
    i = 0;
    if (ft_atoi(word[i]) > INT_MIN && INT_MAX < ft_atoi(word[i]))
        return (0);
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
            if (!ft_check_number(word[j]))
            {
                ft_free(word);
                // list 풀어주기
                return (0);
            }
            j++;
            // list에 집어넣기;
        }
        i++;
        ft_free(word);
    }
    return (1);
}