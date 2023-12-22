/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:02:52 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/11/15 12:37:44 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	risultato;

	if (n < 0)
	{
		risultato = 'N';
	}
	else
	{
		risultato = 'P';
	}
	write(1, &risultato, 1);
}
