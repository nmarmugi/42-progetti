/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_limits_ps.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:01:54 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/03/28 20:01:56 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_limits_ps(long long n, int sign)
{
	if (sign == 1)
	{
		if (n > INT_MAX)
		{
			write (2, "Error\n", 6);
			exit (1);
		}
	}
	if (sign == -1)
	{
		if (n < INT_MIN)
		{
			write (2, "Error\n", 6);
			exit (1);
		}
	}
}
