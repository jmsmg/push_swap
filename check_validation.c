/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:01:16 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/14 12:46:59 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_array(int *array, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		tmp = array[i];
		while (j < size)
		{
			if (tmp == array[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_dup(int argc, char **argv)
{
	int	i;
	int	*array;

	array = (int *)malloc((sizeof(int) * argc) - 1);
	if (!array)
	{
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		array[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	if (!ft_check_array(array, argc))
	{
		free(array);
		return (0);
	}
	free(array);
	return (1);
}

int	ft_check_number(char *word)
{
	int		sign;
	size_t	i;

	i = 0;
	sign = 0;
	while (word[i] == '-' || word[i] == '+')
	{
		sign += 1;
		i++;
	}
	while (ft_isdigit(word[i]))
		i++;
	if (ft_strlen(word) == 0 || ft_strlen(word) != i || 1 < sign || 11 < i)
		return (0);
	i = 0;
	if (ft_atoi(word[i]) > 2147483647 && -2147483648 < ft_atoi(word[i]))
		return (0);
	return (1);
}

int	ft_check_validation(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		if (!ft_check_number(argv[i]))
		{
			return (0);
		}
		i++;
	}
	if (!ft_check_dup(argc, argv))
		return (0);
	return (1);
}
