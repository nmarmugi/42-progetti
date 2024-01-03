/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:57:15 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/19 11:00:29 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*int	main() 
{
	const char	*string = "Hello, World!";

	size_t	lunghezza = ft_strlen(string);

	printf("Stringa: %s\n", string);
	printf("Lunghezza della stringa: %zu\n", lunghezza);

	return 0;
}*/