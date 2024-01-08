/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:19:17 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/08 14:41:23 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	tot_size;
	void	*ptr;
	size_t	i;

	i = 0;
	tot_size = nmemb * size;
	ptr = malloc(tot_size);
	if (nmemb != 0 && tot_size / nmemb != size)
		return (NULL);
	if (ptr != NULL)
	{
		while (i < tot_size)
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
