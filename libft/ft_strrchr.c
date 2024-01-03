/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:07:34 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/22 11:32:51 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ultima_occorrenza;

	ultima_occorrenza = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ultima_occorrenza = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)ultima_occorrenza);
}
/*int	main()
{
	const char	*string = "Hello, World!";
	char	carattere = 'o';

	char	*risultato = strrchr(string, carattere);

	printf("Stringa: %s\n", string);
	printf("'%c'. Risultato dopo strrchr: %s\n", carattere, risultato);
	return 0;
}*/
