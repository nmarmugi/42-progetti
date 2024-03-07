/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:07:34 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/08 14:52:37 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*int	main()
{
// Cerca l'ultima occorrenza di un carattere specifico in una stringa
	const char	str[] = "Ciao mamma";
	int	carattere = 'a';
	printf("%s\n", str);
	printf("Il carattere è: %c\n", carattere);
	char	*risultato = ft_strrchr(str, carattere);
	size_t	posizione = risultato - str;
	if (risultato == NULL)
		printf("Il carattere non è stato trovato\n");
	else
		printf("%c è in posizione %ld\n", carattere, posizione);
	return (0);
}*/
