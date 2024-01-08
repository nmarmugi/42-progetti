/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:07:34 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/08 14:52:37 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*int	main()
{
	const char	*string = "Hello, World!";
	char	carattere = 'o';

	char	*risultato = strrchr(string, carattere);

	printf("Stringa: %s\n", string);
	printf("'%c'. Risultato dopo strrchr: %s\n", carattere, risultato);
	return 0;
}*/
