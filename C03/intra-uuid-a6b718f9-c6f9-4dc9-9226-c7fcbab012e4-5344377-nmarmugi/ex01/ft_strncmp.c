/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:02:48 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/11/28 14:28:20 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (n > 0 && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
		n--;
	}
	return (0);
}
/*int main()
{
	char str1[] = "Ciaa";
	char str2[] = "Ciao";

	int risultato = ft_strncmp(str1, str2, 4);

	if (risultato == 0)
	{
		printf("I primi 4 caratteri sono uguali.\n");
	}
	else if (risultato < 0)
	{
		printf("I primi 4 caratteri di s1 sono minori di s2.\n");
	}
	else
	{
		printf("I primi 4 caratteri di s1 sono maggiori di s2.\n");
	}
	return 0;
}*/
