/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:07:34 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/20 13:07:38 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char	*ultima_occorrenza;

	i = 0;
	ultima_occorrenza = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			ultima_occorrenza = (char *)s;
		i++;
	}
	return (ultima_occorrenza);
}
