/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:03:27 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/11/20 15:19:28 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	else
	{
		*div = 0;
		*mod = 0;
	}
}
/*int main()
{
	int num1 = 20;
	int num2 = 13;
	int risultato_divisione;
	int resto_divisione;
	ft_div_mod(num1, num2, &risultato_divisione, &resto_divisione);
	printf("Risultato della divisione: %d\n", risultato_divisione);
	printf("Resto della divisione: %d\n", resto_divisione);
	return 0;
}*/
