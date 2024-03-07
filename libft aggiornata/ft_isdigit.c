/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:19:07 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/03/07 12:21:57 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*int	main()
{
// Vede se è un valore numerico
	int	c;
	
	c = 'o';
	if (ft_isdigit(c) == 1)
		write (1, "1\n", 2);
	else
		write (1, "0\n", 2);
	return (0);
}*/
