/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:19:17 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/20 15:19:21 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	dimensione_totale;
	void	*ptr;
	size_t	i;

	i = 0;
	dimensione_totale = nmemb * size;
	ptr = malloc(dimensione_totale);
	if (nmemb != 0 && dimensione_totale / nmemb != size)
		return (NULL);
	if (ptr != NULL)
	{
		while (i < dimensione_totale)
		{
			((char *)ptr)[i] = 0;
			i++;
		}
	}
	return (ptr);
}
/*int	main() {

	int	*arr = (int *)ft_calloc(3, sizeof(int));

	if (arr != NULL)
	{
		printf("Memoria allocata con successo.\n");
		for (size_t i = 0; i < 3; i++)
			printf("%d ", arr[i]);
		printf("\n");
		free(arr);
	}
	return 0;
}*/
