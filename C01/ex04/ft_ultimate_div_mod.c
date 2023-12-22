/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:22:13 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/11/20 16:33:07 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divisione;
	int	modulo;

	divisione = *a / *b;
	modulo = *a % *b;
	*a = divisione;
	*b = modulo;
}
/*int main()
{
	int num1;
	int num2;
	num1 = 6;
	num2 = 4;

	ft_ultimate_div_mod(&num1, &num2);
	printf("Il risultato della divisione %d\n", num1);
	printf("Il resto della divisione %d\n", num2);
	return 0;
}*/
