/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:50:09 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/03/25 12:09:49 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

static int	check_digit_and_zero(char *av)
{
	int i;

	i = 0;
	if (av[i] != '\0' && av[i] == ft_isoperator(av[i + 1]))
		i++;
	if (av[i] == '0')
	{
		while (av[i] && av[i] == '0')
			i++;
		if (av[i] != '\0')
			return (0);
	}
	while (av[i] != '\0' && ft_isdigit(av[i]))
		i++;
	if (av[i] == '\0' && !ft_isoperator(av[i]))
		return (0);
	return (1);
}

static int	check_double(char **av)
{
	int i;
	int j;
	
	i = 1;
	while (av[i])
	{
		j = 1;
		while (av[j])
		{
			if (i != j && check_cmp(av[i], av[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	valid_input(char **av)
{
	int	i;
	int	zero;

	zero = 0;
	i = 1;
	while (av[i])
	{
		if (!check_digit_and_zero(av[i]))
			return (0);
		zero += check_digit_and_zero(av[i]);
		i++;
	}
	if (zero > 1)
		return (0);
	if (check_double(av))
		return (0);
	return (1);
}
