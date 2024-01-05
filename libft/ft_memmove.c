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

	d = (char *)dest;
	s = (const char *)src;
	if (dest == NULL && src == NULL && n > 0)
		return (NULL);
	if (d > s && d < s + n)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
	{
		while (n-- > 0)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	return (dest);
}
/*int	main()
{
	char	str[] = "Hello, World!";
	char	dest[50];

	ft_memmove(dest, str, 6);
	printf("src: %s\n", str);
	printf("dest: %s\n", dest);
	return 0;
}*/
