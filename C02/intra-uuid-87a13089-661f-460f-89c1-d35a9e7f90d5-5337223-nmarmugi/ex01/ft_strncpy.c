/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:02:50 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/11/27 11:39:41 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	in;

	in = 0;
	while (src[in] != '\0' && in < n)
	{
		dest[in] = src[in];
		in++;
	}
	while (in < n)
	{
		dest[in] = '\0';
		in++;
	}
	return (dest);
}
/*int main()
{
    char source[] = "Hello, World!";
    char destination[20];

    ft_strncpy(destination, source, 7);

    printf("Stringa di destinazione: %s\n", destination);

    return 0;
}*/
