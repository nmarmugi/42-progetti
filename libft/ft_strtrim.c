/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:21:22 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/08 14:53:03 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_str(char c, const char *str)
{
	while (*str)
	{
		if (*str == c)
			return (0);
		str++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	start = 0;
	end = ft_strlen(s1);
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (ft_is_in_str(s1[start], set) == 0)
		start++;
	if (start == ft_strlen(s1))
	{
		result = ft_strdup("");
		if (result == NULL)
			return (NULL);
		else
			return (result);
	}
	while (ft_is_in_str(s1[end - 1], set) == 0)
		end--;
	result = ft_substr(s1, start, end - start);
	return (result);
}
/*int	main()
{
// Rimuove caratteri specificati all'inizio e alla fine di una stringa
	char	s1[] = "  Ciao mamma  ";
	char	set[] = " Ca";
	char	*risultato = ft_strtrim(s1, set);
	printf("%s, risultato dopo strtrim\n", risultato);
	free(risultato);
	return (0);
}*/
