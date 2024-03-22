/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:00:34 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/08 21:20:11 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
/*int	main(void)
{
// Setta n byte di memoria a un valore specificato
	char	str[] = "Ciao mamma";;
	int	c;
	 
	c = 'X';
	ft_memset(str, c, 4);
	printf("%s\n", str);
	return (0);
}*/
