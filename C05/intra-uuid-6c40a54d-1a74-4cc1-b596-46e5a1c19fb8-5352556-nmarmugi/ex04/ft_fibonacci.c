/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:25:11 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/03 15:25:19 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
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
			int	i = atoi(a);
			printf("%i", ft_fibonacci(i));
		}
	}
	return (0);
}*/
