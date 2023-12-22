/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:20:51 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/22 11:33:41 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char		temp[n];

	d = (char *)dest;
	s = (const char *)src;
	if (d > s && d < s + n)
	{
		ft_memcpy(temp, s, n);
		ft_memcpy(d, temp, n);
	}
	else
		ft_memcpy(d, s, n);
	return (d);
}
