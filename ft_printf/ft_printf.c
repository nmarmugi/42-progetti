/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:51:58 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/17 17:17:08 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		return ((va_arg(args, unsigned long long int)));
	else if (c == 'd')
		return ((va_arg(args, int), 10));
	else if (c == 'x')
		return ((va_arg(args, unsigned int), 16));
	else if (c == 'X')
		return ((va_arg(args, unsigned int), 16));
	else if (c == '%')
	{
		write (1, "%", 1);
		return (1);
	}
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

int	main(void)
{
	ft_printf("Percentuale: %%\n");
	ft_printf("Carattere: %c\n", 'C');
	ft_printf("Stringa: %s\n", "Ciao mamma");
	ft_printf("Indirizzo: %p\n", "Ciao mamma");
	ft_printf("Numero decimale: %d\n", 42);
	ft_printf("Numero esadecimale minuscolo: %x\n", 0x1a3f);
	ft_printf("Numero esadecimale maiuscolo: %X\n", 0x1A3F);
	return (0);
}