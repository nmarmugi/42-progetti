/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:23:58 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/03 15:24:09 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	risultato;

	i = 0;
	risultato = 1;
	if (i < power)
	{
		risultato = nb * ft_recursive_power(nb, power - 1);
		i++;
	}
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (risultato);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		if (argv[1][0] != '\0' && argv[2][0] != '\0')
		{
			char	*x = argv[1];
			int	nb = atoi(x);
			char	*y = argv[2];
			int	power = atoi(y);
			printf("%i", ft_recursive_power(nb, power));
		}
	}
	return (0);
}*/
