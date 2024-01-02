/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 10:27:46 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/02 14:56:54 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sublen;
	char	*substring;
	char	*temp;

	temp = (char *)malloc((len + 1) * sizeof(char));
	if (temp == NULL)
		return (NULL);
	substring = temp;
	sublen = 0;
	while (s[sublen] != '\0')
		sublen++;
	if (len > sublen - start)
		len = sublen - start;
	while (*s != '\0' && start > 0)
	{
		s++;
		start--;
	}
	while (*s != '\0' && len > 0)
	{
		*substring++ = *s++;
		len--;
	}
	*substring = '\0';
	return (temp);
}
/*int main() 
{
    const char *input_string = "Esempio di sottostringa";
    unsigned int start_index = 0;
    size_t substring_length = 7;

    char *result = ft_substr(input_string, start_index, substring_length);

    if (result != NULL) 
	{
        printf("Sottostringa: %s\n", result);

        free(result);
    } 
	else 
        printf("Errore nell'allocazione di memoria per la sottostringa.\n");

    return 0;
}*/