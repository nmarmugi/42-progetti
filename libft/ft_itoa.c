/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:10:47 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/02 14:40:07 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		i;

	nb = n;
	if (nb == 0)
	{
		i = 1;
		str = (char *)malloc(i + 1);
		if (!str)
			return (NULL);
		str[0] = '0';
	}
	i = len(nb);
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[i--] = '0' + (nb % 10);
		nb /= 10;
	}
	return (str);
}
/*int main() {
    int num = 343534;

    char *str = ft_itoa(num);

    printf("Numero intero: %d\n", num);
    printf("Rappresentazione come stringa: %s\n", str);

    return 0;
}*/