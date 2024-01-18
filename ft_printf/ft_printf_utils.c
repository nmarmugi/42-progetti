/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:53:23 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/18 17:32:39 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[i])
		ft_putchar(s[i++]);
	return (i);
}

int	ft_putnbr(long n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = n * -1;
			i++;
		}
		if (n > 9)
			i += ft_putnbr(n / 10);
		i += ft_putchar((n % 10) + '0');
	}
	return (i);
}

int	ft_print_lowhex(unsigned long n)
{
	char	*lowhex;
	int		i;

	lowhex = "0123456789abcdef";
	i = 0;
	if (n >= 16)
	{
		i += ft_print_lowhex(n / 16);
		i += ft_print_lowhex(n % 16);
	}
	else
		i += ft_putchar(lowhex[n]);
	return (i);
}

int	ft_print_upphex(unsigned long n)
{
	char	*upphex;
	int		i;

	upphex = "0123456789ABCDEF";
	i = 0;
	if (n >= 16)
	{
		i += ft_print_upphex(n / 16);
		i += ft_print_upphex(n % 16);
	}
	else
		i += ft_putchar(upphex[n]);
	return (i);
}

int	ft_print_address(unsigned long ptr, int index)
{
	char	*lowhex;
	int		i;

	lowhex = "0123456789abcdef";
	i = 0;
	if (!index && !ptr)
		return (ft_putstr("(nil)"));
	if (index == 0)
		i += ft_putstr("0x");
	if (ptr >= 16)
	{
		i += ft_print_lowhex(ptr / 16);
		i += ft_print_lowhex(ptr % 16);
	}
	else
		i += ft_putchar(lowhex[ptr]);
	return (i);
}
