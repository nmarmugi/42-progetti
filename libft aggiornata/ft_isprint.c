/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:46:32 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/18 16:51:14 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*int	main()
{
// Vede se è un valore stampabile
	int	c;
	
	c = ' ';
	if (ft_isprint(c) == 1)
		write (1, "1\n", 2);
	else
		write (1, "0\n", 2);
	return (0);
}*/