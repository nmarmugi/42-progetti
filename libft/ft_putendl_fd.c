/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:54:06 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/04 15:24:01 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		while (*s)
		{
			write (fd, s, 1);
			s++;
		}
	}
	write (fd, "\n", 1);
}
/*int main(void)
{
// Stampa, su un file descriptor, una stringa seguita da un \n 
	int stdout_fd = 1;
	char str[] = "Ciao, mamma";

	write(stdout_fd, "Stampa della stringa usando ft_putendl_fd:\n", 44);
	ft_putendl_fd(str, stdout_fd);
	return (0);
}*/
