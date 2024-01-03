/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:06:34 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/03 14:35:55 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*risultato;
	size_t	i;

	len = 0;
	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[len])
		len++;
	risultato = (char *)malloc(len + 1);
	if (risultato == NULL)
		return (NULL);
	while (i < len)
	{
		risultato[i] = f((unsigned int)i, s[i]);
		i++;
	}
	risultato[len] = '\0';
	return (risultato);
}
