/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:22:02 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/02 12:09:04 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*risultato;

	len_s1 = 0;
	len_s2 = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;
	risultato = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!risultato)
		return (NULL);
	while (*s1)
		*risultato++ = *s1++;
	while (*s2)
		*risultato++ = *s2++;
	*risultato = '\0';
	return (risultato - len_s1 - len_s2);
}
/*int	main() 
{
	const char	*string1 = "Hello, ";
	const char	*string2 = "world!";

	char	*risultato = ft_strjoin(string1, string2);

	if (risultato != NULL)
	{
		printf("Stringa concatenata: %s\n", risultato);
		free(risultato);
	}
	else
		printf("Errore nell'allocazione di memoria della stringa.\n");
	return 0;
}*/
