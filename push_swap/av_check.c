/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   av_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:42:41 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/03/25 16:40:42 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

char	**av_check(int ac, char **av)
{
	if (ac >= 2)
	{
		int		i;
		int		j;
		char 	**temp;
		
		j = 1;
		while (j < ac)
		{
			i = 0;
			if (av[j][i] == '\0')
			{
				write(2, "Error\n", 6);
				return NULL;
			}
			while (av[j][i])
			{
				if (ac == 2)
				{
					while ((av[j][i]))
					{
						if (ft_isoperator(av[j][i]) == 1)
							i++;
						if ((ft_isoperator(av[j][i]) == 1) || (av[j][i] >= 9 && av[j][i] <= 13) || (av[j][i] >= 33 && av[j][i] <= 42) ||
							(av[j][i] == 44) || (av[j][i] >= 46 && av[j][i] <= 47) || (av[j][i] >= 58 && av[j][i] <= 126))
							{
								write(2, "Error\n", 6);
								return NULL;
							}
						i++;
					}
					return (ft_split(av[1], ' '));
				}
				else
				{
					while (av[j][i])
					{
						if (ft_isoperator(av[j][i]) == 1)
							i++;
						if ((ft_isoperator(av[j][i]) == 1) || (av[j][i] >= 9 && av[j][i] <= 13) || (av[j][i] >= 32 && av[j][i] <= 42) ||
							(av[j][i] == 44) || (av[j][i] >= 46 && av[j][i] <= 47) || (av[j][i] >= 58 && av[j][i] <= 126))
							{
								write(2, "Error\n", 6);
								return NULL;
							}
						while ((ft_isdigit(av[j][i]) == 1) || (ft_isoperator(av[j][i]) == 1))
							i++;
					}
				}
			}
			j++;
		}
		return (temp = av+1);
	}
	else
	{
		write (2, "Error\n", 6);
		exit(1);
	}
}
