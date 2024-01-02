/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:46:32 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/18 16:51:14 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*int	main()
{
	char	test_char;
	
	test_char = '0';
	if (ft_isprint(test_char))
		printf("%c è stampabile: vero\n", test_char);
	else
		printf("%c è stampabile: falso\n", test_char);
	return 0;
}*/
