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
/*int	main() {
	char	dest[20] = "Hello, ";
	const char	*src = "World!";
	size_t	size = sizeof(dest) + 1;

	printf("Stringa di destinazione originale: %s\n", dest);
	printf("Stringa di origine: %s\n", src);

	size_t risultato = ft_strlcat(dest, src, size);

	printf("Risultato di ft_strlcat: %ld\n", risultato);
	printf("Stringa di destinazione dopo l'operazione: %s\n", dest);
	return 0;
}*/
