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

int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

size_t	find_start(const char *s1, const char *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	return (start);
}

size_t	find_end(const char *s1, const char *set, size_t end)
{
	while (end > 0 && is_in_set(s1[end - 1], set))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	newlen;
	char	*result;

	start = find_start(s1, set);
	end = find_end(s1, set, 0);
	if (!s1 || !set)
		return (NULL);
	newlen = end - start;
	result = (char *)malloc((newlen + 1) * sizeof(char));
	if (!result)
		return (NULL);
	*result = '\0';
	return (result);
}
/*int main()
{
    const char *input_string = "   ***Hello, World!***   ";
    const char *set_of_chars = " *!";

    char *trimmed_string = ft_strtrim(input_string, set_of_chars);

    if (trimmed_string != NULL) {
        printf("Stringa originale: \"%s\"\n", input_string);
        printf("Stringa dopo la rimozione: \"%s\"\n", trimmed_string);

        free(trimmed_string);
    } 
	else
        printf("Errore nell'allocazione di memoria della stringa.\n");
    return 0;
}*/