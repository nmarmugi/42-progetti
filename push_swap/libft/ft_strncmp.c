/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:39:02 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/04 14:09:54 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n -1 && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*int	main()
{
// Confronta i primi n caratteri di due stringhe
	const char	str1[] = "Ciao";
	const char	str2[] = "mamma";
	size_t	n = 2;
	int	risultato = ft_strncmp(str1, str2, n);
	if (n == 0)
		printf("Non ho eseguito il controllo\n");
	else
	{
		if (risultato == 0)
			printf("I primi %ld caratteri sono uguali\n", n);
		else
			printf("I primi %ld caratteri sono diversi\n", n);
	}
	return (0);
}*/
