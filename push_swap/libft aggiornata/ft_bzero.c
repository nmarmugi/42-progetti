/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:43:29 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/19 12:56:54 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
/*int	main()
{
// Imposta a 0, i primi n caratteri di una memoria puntata da un puntatore
	char	str[5] = "Ciao!";
	printf("Prima ft_bzero: %s\n", str);
	ft_bzero(str, 5);
	printf("Dopo ft_bzero: %s\n", str);
	return 0;
}*/
