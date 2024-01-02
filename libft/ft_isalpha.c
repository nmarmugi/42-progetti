/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:59:32 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/18 16:13:26 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*int	main()
{
	char	test_char;
	
	test_char = '0';
	if (ft_isalpha(test_char))
		printf("%c è alfabetico: vero\n", test_char);
	else
		printf("%c è alfabetico: falso\n", test_char);
	return 0;
}*/
