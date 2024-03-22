/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 10:27:46 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/02 14:56:54 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	size_t	size;
	char	*tab;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	tab = (char *)malloc((len + 1) * sizeof(char));
	if (!(tab))
		return (NULL);
	count = 0;
	while (count < len)
	{
		tab[count] = s[start + count];
		count++;
	}
	tab[count] = '\0';
	return (tab);
}
/*int	main() 
{
// Prende una sottostringa da una stringa, specificando uno start e lunghezza
// della sottostringa desiderata
	char const	s[] = "Ciao mamma";
	unsigned int	start = 0;
	size_t	len_sub = 4;
	char	*risultato = ft_substr(s, start, len_sub);
	if (ft_strlen(s) <= start)
		printf("%s: stringa vuota", risultato);
	if (*risultato)
		printf("%s: risultato dopo substr\n",  risultato);
	free(risultato);
	return (0);
}*/
