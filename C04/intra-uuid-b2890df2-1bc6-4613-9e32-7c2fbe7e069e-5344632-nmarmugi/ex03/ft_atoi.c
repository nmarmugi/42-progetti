/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:09:48 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/11/30 12:43:50 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	segno;
	int	risultato;

	i = 0;
	segno = 0;
	risultato = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	//while (str[i] == '+' || str[i] == '-')
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			segno++;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		risultato = risultato * 10 + str[i] - '0';
		i++;
	}
	if (segno % 2 != 0)
		risultato = -risultato;
	return (risultato);
}
/*int main()
{
	char	stri[] = "      -1234ab567";
	printf("%d", ft_atoi(stri));
	return 0;
}*/
