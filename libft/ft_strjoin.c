/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:22:02 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/08 14:50:09 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*result;

	len_s1 = 0;
	len_s2 = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;
	result = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (*s1)
		*result++ = *s1++;
	while (*s2)
		*result++ = *s2++;
	*result = '\0';
	return (result - len_s1 - len_s2);
}
/*int	main() 
{
// Concatena due stringhe allocando memoria per un'unica stringa
// che le contenga entrambe
	const char	s1[] = "Ciao mamma ";
	const char	s2[] = "guarda come mi diverto";
	printf("%s: prima stringa\n", s1);
	printf("%s: seconda stringa\n", s2);
	char	*risultato = ft_strjoin(s1, s2);
	if (*risultato)
		printf("%s: nuova stringa, %p indirizzo\n", risultato, risultato);
	free(risultato);
	return (0);
}*/
