/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:59:32 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/18 16:13:26 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*int	main()
{
// Vede se è un valore alfabetico
	int	c;
	
	c = '0';
	if (ft_isalpha(c) == 1)
		write (1, "1\n", 2);
	else
		write (1, "0\n", 2);
	return (0);
}*/
