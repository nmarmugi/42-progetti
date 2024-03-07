/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:47:45 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/03/07 12:37:21 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	target;
	char	*str;

	target = (char)c;
	str = (char *)s;
	if (target == '\0')
		return (str + ft_strlen(str));
	while (*str)
	{
		if (*str == target)
			return (str);
		str++;
	}
	return (NULL);
}
/*int	main()
{
// Cerca la prima occorrenza di un carattere specificato in una stringa
	const char	str[] = "Ciao mamma";
	int	carattere = 'm';
	printf("%s\n", str);
	printf("%c è da trovare\n", carattere);
	char	*risultato = ft_strchr(str, carattere);
	size_t	posizione = risultato - str;
	if (risultato == NULL)
		printf("Il carattere non è stato trovato\n");
	else
		printf("%c è in posizione %ld\n", carattere, posizione);
	return (0);
}*/
