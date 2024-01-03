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
/*int	main() {
	char	dest[20];
	const char	*src = "Hello, World!";

	size_t	risultato = ft_strlcpy(dest, src, sizeof(dest) / sizeof(dest[0]));

	printf("Stringa di origine: %s\n", src);
	printf("Stringa di destinazione dopo ft_strlcpy: %s\n", dest);
	printf("Lunghezza totale della stringa di origine: %zu\n", risultato);

	return 0;
}*/
