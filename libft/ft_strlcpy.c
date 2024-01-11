/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:11:54 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/20 11:12:00 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i + len_src])
		len_src++;
	return (len_src + i);
}
/*int	main()
{
// Copia una stringa in un'altra con una dimensione specificata
	const char	src[] = "Ciao mamma";
	char	dest[15];
	size_t	len_src;
	len_src = sizeof(src);
	printf("Src: %s\n", src);
	printf("Dest: %s\n", dest);
	ft_strlcpy(dest, src, len_src);
	printf("Src dopo: %s\n", src);
	printf("Dest dopo: %s\n", dest);
	printf("Lunghezza src: %ld\n", len_src);
	return (0);
}*/
