/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:10:47 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/04 15:07:14 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ottieni_dimensione(int n)
{
	int	dimensione;

	dimensione = 0;
	if (n <= 0)
		dimensione++;
	while (n != 0)
	{
		n = n / 10;
		dimensione++;
	}
	return (dimensione);
}

static void	riempi_risultato(int dimensione, int offset, int n, char *risultato)
{
	while (dimensione > offset)
	{
		risultato[dimensione - 1] = n % 10 + '0';
		n = n / 10;
		dimensione--;
	}
}

char	*ft_itoa(int n)
{
	int		offset;
	int		dimensione;
	char	*risultato;

	offset = 0;
	dimensione = ottieni_dimensione(n);
	risultato = (char *)malloc(sizeof(char) * dimensione + 1);
	if (!(risultato))
		return (0);
	if (n == -2147483648)
	{
		risultato[0] = '-';
		risultato[1] = '2';
		n = 147483648;
		offset = 2;
	}
	if (n < 0)
	{
		risultato[0] = '-';
		offset = 1;
		n = -n;
	}
	riempi_risultato(dimensione, offset, n, risultato);
	risultato[dimensione] = '\0';
	return (risultato);
}
/*int	main()
{
	int num = -9;

	char *str = ft_itoa(num);

	printf("Numero intero: %d\n", num);
	printf("Rappresentazione come stringa: %s\n", str);
	return 0;
}*/