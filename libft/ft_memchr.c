/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:17:15 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/20 14:17:19 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	int	i;

	i = 0;
	ptr = s;
	while (n--)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)ptr);
		i++;
	}
	return (NULL);
}
