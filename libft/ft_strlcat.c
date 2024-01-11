/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:24:26 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/08 14:50:55 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	j = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = dlen;
	if (dlen < size - 1 && size > 0)
	{
		while (src[j] && dlen + j < size - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	if (dlen >= size)
		dlen = size;
	return (dlen + slen);
}
/*int	main()
{
// Concatena due stringhe ma limita la lunghezza totale delle due per evitare
// overflow
	const char	src[] = " guarda come mi diverto";
	char	dest[35] = "Ciao mamma";
	size_t	len_dest = sizeof(dest);
	printf("Src: %s\n", src);
	printf("Dest: %s\n", dest);
	printf("Lunghezza dest: %ld\n", ft_strlcat(dest, src, len_dest));
	printf("Src dopo: %s\n", src);
	printf("Dest dopo: %s\n", dest);
	return (0);
}*/
