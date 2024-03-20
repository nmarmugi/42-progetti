/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:57:15 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/03/07 12:39:38 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i] != '\0')
		i++;
	return (i);
}
/*int	main() 
{
// Conta il numero di caratteri di una stringa prima del \0
	const char	str[] = "Ciao mamma";
	int	i;
	
	i = ft_strlen(str);
	printf("%d\n", i);
	return (0);
}*/