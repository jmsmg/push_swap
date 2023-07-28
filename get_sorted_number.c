/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sorted_number.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 08:41:35 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/28 11:29:19 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	*ft_get_array(int size, char **argv)
{
	int	i;
	int	*number;

	i = 0;
	number = (int *)malloc((sizeof(int) * size));
	if (!number)
	{
		return (NULL);
	}
	while (i < size)
	{
		number[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	return (number);
}

int	*ft_get_sorted_number(int size, char **argv)
{
	int	i;
	int	j;
	int	*array;

	i = 0;
	array = ft_get_array(size, argv);
	if (!array)
	{
		return (NULL);
	}
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] > array[j])
			{
				ft_swap(array[i], array[j]);
			}
			j++;
		}
		i++;
	}
	return (array);
}
