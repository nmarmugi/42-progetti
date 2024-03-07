/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:37:07 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/18 16:45:39 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*int	main()
{
// Vede se è un valore ascii
	int	c;
	
	c = '/';
	if (ft_isascii(c) == 1)
		write (1, "1\n", 2);
	else
		write (1, "0\n", 2);
	return (0);
}*/
