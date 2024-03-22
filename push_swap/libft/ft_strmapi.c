/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:06:34 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/08 14:51:31 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*result;
	size_t	i;

	len = 0;
	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[len])
		len++;
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		result[i] = f((unsigned int)i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}
/*char	ft_upper(unsigned int i, char c)
{
	char	risultato;

	if (i % 2 == 0)
		risultato = c;
	else
	{
		if (c >= 97 && c <= 122)
			risultato = c - 32;
		else
			risultato = c;
	}
	return (risultato);
}
int	main()
{
// Applica una funzione a ogni carattere di una stringa, passando sia
// il carattere che l'indice del carattere alla funzione
	char const	s[] = "ciao mamma";
	char	*risultato = ft_strmapi(s, &ft_upper);
	printf("%s: stringa passata\n", s);
	printf("%s: dopo strmapi\n", risultato);
	free(risultato);
	return (0);
}*/
