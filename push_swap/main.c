/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:07:28 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/03/22 21:50:59 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

int main(int ac, char **av)
{
    char **result = av_check(ac, av);

    if (result != NULL)
	{
        for (int i = 0; result[i] != NULL; i++)
		{
            printf("%s\n", result[i]);
        }
    }
    return 0;
}