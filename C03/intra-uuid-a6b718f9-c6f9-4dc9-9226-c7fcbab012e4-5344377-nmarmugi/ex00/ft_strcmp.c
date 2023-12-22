/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:07:50 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/11/28 12:27:08 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*int main()
{
    char str1[] = "Ciao";
    char str2[] = "Nico";

    int result = ft_strcmp(str1, str2);

    if (result == 0) {
        printf("Le stringhe sono uguali.\n");
    } else if (result < 0) {
        printf("La stringa 1 e' minore della stringa 2.\n");
    } else {
        printf("La stringa 1 e' maggiore della stringa 2.\n");
    }

    return 0;
}*/
