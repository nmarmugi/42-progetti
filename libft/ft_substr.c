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
	size_t	count;
	size_t	size;
	char	*tab;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	tab = (char *)malloc((len + 1) * sizeof(char));
	if (!(tab))
		return (NULL);
	count = 0;
	while (count < len)
	{
		tab[count] = s[start + count];
		count++;
	}
	tab[count] = '\0';
	return (tab);
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
