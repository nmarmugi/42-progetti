/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:42:41 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/03/21 12:46:56 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

char	**av_check(int ac, char **av)
{
	if (ac == 2)
	{
		int	i;
		
		i = 0;
		while (av[1][i])
		{
			if ((ft_isdigit(av[1][i]) == 1) || (av[1][i] == 32) || (av[1][i] == '+') ||
			(av[1][i] == '-'))
				i++;
			else
			{
				write(2, "Error\n", 6);
				return NULL;
			}
		}
		return (ft_split(av[1], ' '));
	}
	write (2, "Error\n", 6);
	exit(1);
}

