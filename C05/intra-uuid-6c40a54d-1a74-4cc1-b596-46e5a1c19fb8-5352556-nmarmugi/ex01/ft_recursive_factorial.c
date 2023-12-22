/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:21:54 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/03 15:22:08 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	risultato;

	risultato = 1;
	if (nb > 0)
	{
		risultato = nb * ft_recursive_factorial(nb -1);
		nb--;
	}
	if (nb < 0)
		return (0);
	return (risultato);
}

/*int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (argv[1][0] != '\0')
		{
			char	*n = argv[1];
			int 	nb = atoi(n);
			printf("%i", ft_recursive_factorial(nb));
		}
	}
	return (0);
}*/
