/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:17:15 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/22 11:33:14 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	i = 0;
	ptr = s;
	while (i < n && ptr[i] != (unsigned char)c)
		i++;
	if (i < n)
		return ((void *)(ptr + i));
	else
		return (NULL);
}
/*int	main() {
	char	str[] = "Hello, World!";
	char	ch = 'z';
	void	*risultato = ft_memchr(str, ch, ft_strlen(str));

	if (risultato != NULL)
		printf("Il carattere '%c' è all'indirizzo: %p\n", ch, risultato);
	else
		printf("Il carattere '%c' non è stato trovato nella stringa.\n", ch);
	return 0;
}*/
