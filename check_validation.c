/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:01:16 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/14 11:21:53 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_dup(int argc, char **argv)
{
	int		i;
	char	*tmp;

	i = 1;
	tmp = "";
	while (i < argc)
	{
		tmp = ft_strjoin(tmp, argv[i]);

		i++;
	}
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
	int		j;

	i = 1;
	while (i < argc)
	{
		if (!ft_check_number(argv[i]))
		{
			return (0);
		}
		i++;
	}
	// array에 넣기?
	if (ft_check_dup(argv))
		return (0);
	return (1);
}
