/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:36:54 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/08 11:40:41 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*dup;

	dup = (char *)malloc(ft_strlen(s) + 1);
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, s);
	return (dup);
}
/*int	main()
{
	const char	s[] = "Ciao mamma";
	char	*risultato;
	printf("%s\n", s);
	risultato = ft_strdup(s);
	printf("Dopo strdup ecco la copia: %s\n", risultato);
	free(risultato);
	return (0);
}*/
