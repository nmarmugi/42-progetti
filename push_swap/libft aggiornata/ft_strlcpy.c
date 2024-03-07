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
	len_src = ft_strlen(src);
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len_src);
}
/*int	main()
{
// Copia una stringa in un'altra con una dimensione specificata
	const char	src[] = "Ciao mamma";
	char	dest[15];
	size_t	len_src;
	dest[0] = '\0';
	len_src = ft_strlen(src);
	printf("Src: %s\n", src);
	printf("Dest: %s\n", dest);
	size_t	copia_len = ft_strlcpy(dest, src, sizeof(dest));
	printf("Src dopo: %s\n", src);
	printf("Dest dopo: %s\n", dest);
	printf("Lunghezza src: %ld\n", len_src);
	printf("Lunghezza copiata in dest: %ld\n", copia_len);
	return (0);
}*/
