/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ITOA.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:13:06 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/17 13:27:45 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static void	ft_full_result(int size, int offset, int n, char *result)
{
	while (size > offset)
	{
		result[size - 1] = n % 10 + '0';
		n = n / 10;
		size--;
	}
}

char	*ft_itoa(int n)
{
	int		offset;
	int		size;
	char	*result;

	offset = 0;
	size = ft_size(n);
	result = (char *)malloc(sizeof(char) * size + 1);
	if (!(result))
		return (0);
	if (n == -2147483648)
	{
		result[0] = '-';
		result[1] = '2';
		n = 147483648;
		offset = 2;
	}
	if (n < 0)
	{
		result[0] = '-';
		offset = 1;
		n = -n;
	}
	ft_full_result(size, offset, n, result);
	result[size] = '\0';
	return (result);
}
