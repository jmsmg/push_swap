/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:08:18 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/14 10:32:37 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static int	ft_isspace(char c)
{
	if (c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r'
		|| c == ' ')
	{
		return (1);
	}
	return (0);
}

long long	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	answer;

	i = 0;
	sign = 1;
	answer = 0;
	while (ft_isspace(str[i]))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		answer = answer * 10 + str[i] - '0';
		i++;
	}
	return (sign * answer);
}
