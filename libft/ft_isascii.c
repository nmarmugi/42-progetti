/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:37:07 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/18 16:45:39 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*int	main()
{
	char	test_char;
	
	test_char = '0';
	if (ft_isascii(test_char))
		printf("%c è ascii: vero\n", test_char);
	else
		printf("%c è ascii: falso\n", test_char);
	return 0;
}*/
