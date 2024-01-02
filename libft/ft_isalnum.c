/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:29:58 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/18 16:35:09 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}
/*int	main()
{
	char	test_char;
	
	test_char = 'a';
	if (ft_isalnum(test_char))
		printf("%c è alfanumerico: vero\n", test_char);
	else
		printf("%c è alfanumerico: falso\n", test_char);
	return 0;
}*/
