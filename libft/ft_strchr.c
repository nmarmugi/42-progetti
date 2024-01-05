/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:47:45 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/20 12:47:52 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	target;
	char	*str;

	target = (char)c;
	str = (char *)s;
	if (target == '\0')
		return (str + ft_strlen(str));
	while (*str)
	{
		if (*str == target)
			return (str);
		str++;
	}
	return (NULL);
}
/*int	main()
{
	const char	*str = "Hello, World!";
	int	carattere = '\0';

	char	*risultato = ft_strchr(str, carattere);
	
	if (risultato != NULL)
		printf("'%c' è in posizione %ld.\n", carattere, risultato - str);
	else
		printf("'%c' non è stato trovato nella stringa.\n", carattere);
	return 0;
}*/
