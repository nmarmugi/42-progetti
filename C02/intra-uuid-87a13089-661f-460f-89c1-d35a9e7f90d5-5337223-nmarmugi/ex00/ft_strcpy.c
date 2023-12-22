/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:53:51 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/11/27 10:00:28 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	contatore;

	contatore = 0;
	while (src[contatore] != '\0')
	{
		dest[contatore] = src[contatore];
		contatore++;
	}
	dest[contatore] = '\0';
	return (dest);
}
/*int main()
{
char destinazione[11];
char origine[] = "Ciao Nico!";
ft_strcpy(destinazione, origine);
printf("%s\n", origine);
printf("%s", destinazione);
return 0;
}*/
