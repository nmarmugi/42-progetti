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
	const char	str[] = "Ciao mamma";
	const char	sott_str[] = "mamma";
	size_t	len = 11;
	char	*risultato = ft_strnstr(str, sott_str, len);
	size_t	posizione = risultato - str;
	if (risultato == NULL)
		printf("Non ho trovato la sottostringa\n");
	else
		printf("Ho trovato %s, in posizione %ld\n", sott_str, posizione);
	return (0);
}*/
