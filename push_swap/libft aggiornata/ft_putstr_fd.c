/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:50:06 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/04 15:28:05 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
	{
		while (*s)
		{
			write (fd, s, 1);
			s++;
		}
	}
}
/*int main(void)
{
// Stampa una stringa su un file descriptor
	int stdout_fd = 1;

	write(stdout_fd, "Stampa della stringa usando ft_putstr_fd:\n", 42);
	ft_putstr_fd("Ciao, mamma\n", stdout_fd);
	return (0);
}*/
