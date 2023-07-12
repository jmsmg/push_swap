/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggoc <seonggoc@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:01:36 by seonggoc          #+#    #+#             */
/*   Updated: 2023/07/12 09:01:37 by seonggoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
    if (1 < argc && ft_check_validation(argc, argv))
    {
        printf("OK");
    }
    else
    {
        write(1, "Error\n", 6);
        free(node);
        node = NULL;
    }
}
