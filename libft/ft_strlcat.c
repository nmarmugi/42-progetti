/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:24:26 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/20 11:24:32 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dlunghezza;
	size_t	slunghezza;

	i = 0;
	dlunghezza = ft_strlen(dest);
	slunghezza = ft_strlen(src);
	if (size == 0 || size <= dlunghezza)
		return (slunghezza + size);
	while (src[i] && dlunghezza + i < size - 1)
	{
		dest[dlunghezza + i] = src[i];
		i++;
	}
	dest[dlunghezza + 1] = '\0';
	return (dlunghezza + slunghezza);
}
/*int	main() {
	char	dest[20] = "Hello, ";
	const char	*src = "World!";
	size_t	size = sizeof(dest) / sizeof(dest[0]);

	printf("Stringa di destinazione originale: %s\n", dest);
	printf("Stringa di origine: %s\n", src);

	size_t risultato = ft_strlcat(dest, src, size);

	printf("Risultato di ft_strlcat: %zu\n", risultato);
	printf("Stringa di destinazione dopo l'operazione: %s\n", dest);
	return 0;
}*/
