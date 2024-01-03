/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:01:14 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/20 15:01:19 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (*little == '\0')
		return ((char *)big);
	while (*big && len > 0)
	{
		i = 0;
		while (big[i] == little[i] && little[i] && len - i > 0)
			i++;
		if (little[i] == '\0')
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
/*int	main()
{
	const char	*string1 = "Hello, World!";
	const char	*string2 = "World";
	size_t	n = 13;

	char	*risultato = ft_strnstr(string1, string2, n);

	printf("Stringa 1: %s\n", string1);
	printf("Sottostringa da cercare: %s\n", string2);
	if (risultato != NULL)
		printf("Sottostringa trovata: %s\n", risultato);
	else
		printf("Sottostringa non trovata.\n");
	return 0;
}*/
