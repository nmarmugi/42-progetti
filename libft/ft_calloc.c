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
/*int	main()
{
// Alloca memoria per tot elementi, dopo azzera
	size_t	nmemb = 5;
	size_t	size = sizeof(int);
	int	*array = (int *)ft_calloc(nmemb, size);
	if (array != NULL)
	{
		printf("Memoria allocata e inizializzata con zeri:\n");
		size_t	i = 0;
		while (i < nmemb)
		{
			printf("array[%d] = %d\n", (int)i, array[i]);
			i++;
		}
		free(array);
	}
	return (0);
}*/
