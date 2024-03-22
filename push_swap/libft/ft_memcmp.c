/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:31:24 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/22 11:34:56 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	ptr1 = s1;
	ptr2 = s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
/*int	main()
{
// Compara il contenuto di due blocchi di memoria per n dimensione
	char	s1[] = "Ciao mamma";
	char	s2[] = "Ciao papà";
	size_t	n = 6;
	int	risultato = ft_memcmp(s1, s2, n);
	if (risultato == 0)
		printf("Le aree di memoria sono uguali\n");
	else
		printf("In %ld byte le aree di memoria sono diverse\n", n);
	return (0);
}*/
