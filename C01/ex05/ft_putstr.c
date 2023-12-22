/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:19:05 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/11/20 18:33:25 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	inizio;

	inizio = 0;
	while (str[inizio] != '\0')
	{
		write (1, &str[inizio], 1);
		str++;
	}
}
/*int main()
{
	char *c;

	c = "Ciao Nico!";
	ft_putstr(c);
	return 0;
}*/
