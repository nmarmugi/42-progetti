/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:51:04 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/11/21 11:32:54 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
/*int main()
{
	int  arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int *arrs = arr;
	ft_rev_int_tab(arrs, 10);
	int i = 0;
	while (i < 10)
	{
		printf("%d",arr[i]);
		i++;
	}
	return (0);
}*/
