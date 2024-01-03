/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:23:41 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/20 12:23:49 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c - 65 + 97);
	else
		return (c);
}
/*int	main()
{
	int	uppercase_char = 'C';
	int	lowercase_char = 'z';

	printf("Carattere: %c\n", (char)uppercase_char);
	printf("Convertito in minuscolo: %c\n", (char)ft_tolower(uppercase_char));
	printf("\nCarattere: %c\n", (char)lowercase_char);
	printf("Convertito in minuscolo: %c\n", (char)ft_tolower(lowercase_char));
	return 0;
}*/
