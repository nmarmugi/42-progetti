/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:19:07 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/18 16:24:08 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*int	main()
{
	char	test_char;
	
	test_char = '0';
	if (ft_isdigit(test_char))
		printf("%c è numerico: vero\n", test_char);
	else
		printf("%c è numerico: falso\n", test_char);
	return 0;
}*/
