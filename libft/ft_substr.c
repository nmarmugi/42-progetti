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
	size_t	i;
	char	*temp;

	i = 0;
	temp = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (!temp)
		return (0);
	while (i < len)
	{
		temp[i] = *(s + start + i);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
/*int	main() 
{
	const char	*input_string = "Esempio di sottostringa";
	unsigned int	start_index = 0;
	size_t	substring_length = 7;

	char	*result = ft_substr(input_string, start_index, substring_length);

	if (result != NULL) 
	{
		printf("Sottostringa: %s\n", result);
		free(result);
	} 
	else 
		printf("Errore nell'allocazione di memoria.\n");
	return 0;
}*/
