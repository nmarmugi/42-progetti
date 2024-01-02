/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:09:48 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/11/30 12:43:50 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	risultato;
	int	segno;

	risultato = 0;
	segno = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			segno = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		risultato = risultato * 10 + (*nptr - '0');
		nptr++;
	}
	return (segno * risultato);
}
/*int main() 
{
    const char *str = "   -0";
    int num = ft_atoi(str);
    printf("Result: %d\n", num);
    return 0;
}*/
