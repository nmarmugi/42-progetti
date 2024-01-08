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
	char	str[15] = "Hello, World!";
	size_t	len = strlen(str);

	printf("Stringa origine: %s\n", str);
	ft_memset(str, 'X', 5);
	printf("Stringa modificata: %s\n", str);
	return 0;
}*/