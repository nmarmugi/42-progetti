/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:24:26 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/20 11:24:32 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlunghezza;
	size_t	slunghezza;

	i = 0;
	j = ft_strlen(dest);
	while (dest[j] != '\0')
	{
		j++;
	}
	dlunghezza = j;
	slunghezza = ft_strlen(src);
	if (size == 0 || size <= dlunghezza)
		return (slunghezza + size);
	while (src [i] != '\0' && i < size - dlunghezza - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlunghezza + slunghezza);
}