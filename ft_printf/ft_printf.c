/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:51:58 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/18 17:40:15 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write (1, &c, 1);
	return (1);
}

static int	ft_conversion(char c, va_list args)
{
	if (c == 'c')
	{
		ft_putchar(va_arg(args, int));
		return (1);
	}
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p')
		return ((long)ft_print_address(va_arg(args, unsigned long), 0));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putnbr(va_arg(args, unsigned int)));
	else if (c == 'x')
		return ((long)ft_print_lowhex(va_arg(args, unsigned int)));
	else if (c == 'X')
		return ((long)ft_print_upphex(va_arg(args, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	args;

	if (!format)
		return (0);
	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_conversion(format[i], args);
		}
		else
			len += write (1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}

// int	main(void)
// {
//  	printf("");
// 	printf("");
// 	printf("");
// 	printf("");
// 	printf("");
// 	printf("");
// 	printf("");
// 	printf("");
// 	ft_printf("");
// 	ft_printf("");
// 	ft_printf("");
// 	ft_printf("");
// 	ft_printf("");
// 	ft_printf("");
// 	ft_printf("");
// 	ft_printf("");
//  	return (0);
// }