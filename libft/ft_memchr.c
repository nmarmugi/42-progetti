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
/*int	main()
{
	char	ptr[] = "Ciao mamma";
	int	carattere = 'm';
	size_t	n = 9;
	void	*risultato = ft_memchr(ptr, carattere, n);
	size_t	posizione = risultato - (void *)ptr;
	if (risultato == NULL)
		printf("Non ho trovato %c, in %ld byte di ptr\n", carattere, n);
	else
		printf("%c è in posizione %ld\n", carattere, posizione);
	return (0);
}*/
