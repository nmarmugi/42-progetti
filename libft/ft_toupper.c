/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:18:45 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/20 12:18:49 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 97 + 65);
	else
		return (c);
}
/*int	main()
{
	int	uppercase_char = 'C';
	int	lowercase_char = 'z';

	printf("Carattere: %c\n", (char)lowercase_char);
	printf("Convertito in maiuscolo: %c\n", (char)ft_toupper(lowercase_char));
	printf("\nCarattere: %c\n", (char)uppercase_char);
	printf("Convertito in maiuscolo: %c\n", (char)ft_toupper(uppercase_char));
	return 0;
}*/
