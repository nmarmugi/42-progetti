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
	char	str1[] = "Hello, World!";
	char	str2[] = "Hello, World";
	int	risultato = ft_memcmp(str1, str2, 13);
	if (risultato == 0)
		printf("Le prime 13 posizioni di str1 e str2 sono uguali.\n");
	else
		printf("Le prime 13 posizioni di str1 e str2 sono diverse.\n");
	return 0;
}*/
