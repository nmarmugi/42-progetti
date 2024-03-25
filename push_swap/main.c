/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:07:28 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/03/25 12:56:23 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

int main(int ac, char **av)
{
    char **result = av_check(ac, av);

    if (result != NULL)
    {
        int i = 0;
        while (result[i] != NULL)
        {
             printf("%s\n", result[i]);
            i++;
        }
    }

    return 0;
}
