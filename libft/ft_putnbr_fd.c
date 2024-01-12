/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:58:20 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/04 15:26:29 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = n * -1;
		}
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}
/*int main(void)
{
// Stampa un numero su un file descriptor
	int stdout_fd = 1;

	write(stdout_fd, "Stampa del numero usando ft_putnbr_fd:\n", 39);
	ft_putnbr_fd(12345, stdout_fd);
	write(stdout_fd, "\n\n", 2);
	write(stdout_fd, "Stampa del numero negativo usando ft_putnbr_fd:\n", 48);
	ft_putnbr_fd(-67890, stdout_fd);
	write(stdout_fd, "\n", 1);
	return (0);
}*/
