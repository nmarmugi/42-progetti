/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:19:16 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/03 15:19:29 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	risultato;

	risultato = 1;
	while (nb > 0)
	{
		risultato *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (risultato);
}

/*int	main(int argc, char *argv[])
{	if (argc == 2)
	{
		if (argv[1][0] != '\0')
		{
			char *n = argv[1];
			int nb = atoi(n);
			printf("%i", ft_iterative_factorial(nb));
		}
	}
	return 0;
}*/
