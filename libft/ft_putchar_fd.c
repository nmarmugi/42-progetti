/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:46:44 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/04 15:20:40 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*int main(void)
{
	int stdout_fd = 1;
	char carattere = 'A';
	write(stdout_fd, "Stampa del carattere usando write:\n", 35);
	write(stdout_fd, &carattere, 1);
	write(stdout_fd, "\n\n", 2);
	write(stdout_fd, "Stampa del carattere usando ft_putchar_fd:\n", 44);
	ft_putchar_fd(carattere, stdout_fd);
	ft_putchar_fd('\n', stdout_fd);
	return 0;
}*/