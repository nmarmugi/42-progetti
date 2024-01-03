/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdups.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:36:54 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/19 11:37:28 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
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
	const char	*src = "Hello, World!";

	char	*dest = ft_strdup(src);

	if (dest != NULL)
	{
		printf("Stringa originale: %s\n", src);
		printf("Stringa duplicata: %s\n", dest);
		free(dest);
	}
	else
		printf("Errore durante l'allocazione della memoria.\n");
	return (0);
}*/
