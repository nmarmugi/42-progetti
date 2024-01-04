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
	const char	*string1 = "Hello, World!";
	const char	*string2 = "Hello, Universe!";
	size_t	n = 7;

	int	risultato = ft_strncmp(string1, string2, n);

	printf("Stringa 1: %s\n", string1);
	printf("Stringa 2: %s\n", string2);
	printf("Confronto (prime %zu caratteri): %d\n", n, risultato);
	return 0;
}*/
