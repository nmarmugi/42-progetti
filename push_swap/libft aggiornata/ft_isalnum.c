/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:29:58 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/18 16:35:09 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}
/*int	main()
{
// Vede se è un valore alfanumerico
	int	c;
	
	c = 'u';
	if (ft_isalnum(c) == 1)
		write (1, "1\n", 2);
	else
		write (1, "0\n", 2);
	return (0);
}*/
