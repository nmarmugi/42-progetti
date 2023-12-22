/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:59:28 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/11/21 10:43:56 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	contatore;

	contatore = 0;
	while (*str != '\0')
	{
		contatore++;
		str++;
	}
	return (contatore);
}
/*int main()
{
	char	miaStringa[] = "Ciao Nico!";
	int	lunghezza;

	lunghezza = ft_strlen(miaStringa);

	printf("La lunghezza della stringa e': %d\n", lunghezza);
	return 0;
}*/
