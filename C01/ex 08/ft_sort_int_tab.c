/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:32:39 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/11/22 11:32:56 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	scambia;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				scambia = tab[i];
				tab[i] = tab [i + 1];
				tab[i + 1] = scambia;
			}
			i++;
		}
		size--;
	}
}
/*int main()
{
	int  arr[5] = {3,2,4,1,5};
	int *arrs = arr;
	ft_sort_int_tab(arrs, 5);
	int i = 0;
	while (i < 5)
	{
		printf("%d",arr[i]);
		i++;
	}
	return (0);
}*/
