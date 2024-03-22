/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:23:41 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/20 12:23:49 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
/*int	main()
{
// Cambia da maiuscolo a minuscolo e lascia invariate le maiuscole di una stringa
// passata
	int	c;
	
	c = 'Z';
	printf("%c\n", (char)ft_tolower(c));
	return (0);
}*/
