/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:58:20 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/03 15:07:41 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	buffer[12];
	int		i;

	i = 0;
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}
	while (n != 0)
	{
		buffer[i++] = n % 10 + '0';
		n /= 10;
	}
	while (--i >= 0)
		write (fd, &buffer[i], 1);
}
