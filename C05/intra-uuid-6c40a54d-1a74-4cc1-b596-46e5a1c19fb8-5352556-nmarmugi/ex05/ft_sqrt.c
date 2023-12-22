/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:25:49 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/03 15:25:57 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (argv[1][0] != '\0')
		{
			char	*a = argv[1];
			int	b = atoi(a);
			printf("%i", ft_sqrt(b));
		}
	}
}*/
