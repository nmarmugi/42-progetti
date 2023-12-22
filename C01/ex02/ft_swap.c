/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:52:45 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/11/20 14:14:50 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temporanea;

	temporanea = *a;
	*a = *b;
	*b = temporanea;
}
/*int main()
{
	int x = 5;
	int y = 10;

    printf("Prima dello scambio: x = %d, y = %d\n", x, y);

    ft_swap(&x, &y);

    printf("Dopo lo scambio: x = %d, y = %d\n", x, y);

    return 0;
}*/
