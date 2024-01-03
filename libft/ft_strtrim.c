/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:21:22 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/02 14:42:47 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (0);
		set++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*risultato;

	start = 0;
	end = ft_strlen(s1);
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (is_in_set(s1[start], set) == 0)
		start++;
	if (start == ft_strlen(s1))
	{
		risultato = ft_strdup("");
		if (risultato == NULL)
			return (NULL);
		else
			return (risultato);
	}
	while (is_in_set(s1[end - 1], set) == 0)
		end--;
	risultato = ft_substr(s1, start, end - start);
	return (risultato);
}
/*int	main()
{
	const char	*input_string = "   ***Hello, World!***   ";
	const char	*set_of_chars = " *!";

	char	*trimmed_string = ft_strtrim(input_string, set_of_chars);

	if (trimmed_string != NULL)
	{
		printf("Stringa originale: \"%s\"\n", input_string);
		printf("Stringa dopo la rimozione: \"%s\"\n", trimmed_string);
		free(trimmed_string);
	} 
	else
		printf("Errore nell'allocazione di memoria.\n");
	return 0;
}*/
