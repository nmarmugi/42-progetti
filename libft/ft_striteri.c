/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:38:41 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/03 15:08:56 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*void	ft_print_char_index(unsigned int i, char *c)
{
	printf("Indice: %d, Carattere: %c\n", i, *c);
}
int	main()
{
// Applica una funzione a ogni carattere di una stringa
// Fornisce anche l'indice del carattere come parametro alla funzione
	char	s[] = "Ciao mamma";
	printf("Stringa passata: %s\n", s);
	ft_striteri(s, &ft_print_char_index);
	return (0);
}*/
