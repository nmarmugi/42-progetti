/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:23:15 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/03 15:23:27 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	risultato;

	i = 0;
	risultato = 1;
	while (i < power)
	{
		risultato *= nb;
		i++;
	}
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (risultato);
}

/*int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		if (argv[1][0] != '\0' && argv[2][0] != '\0')
		{
			char	*x = argv[1];
			int	nb = atoi(x);
			char	*y = argv[2];
			int	power = atoi(y);
			printf("%i", ft_iterative_power(nb, power));
		}
	}
	write(1, "\n", 1);
	return (0);
}*/
