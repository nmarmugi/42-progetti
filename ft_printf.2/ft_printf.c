/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:51:58 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/19 19:51:55 by nmarmugi         ###   ########.fr       */
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
		return (ft_print_ptr(va_arg(args, unsigned long long)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putnbr(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 'x'));
	else if (c == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 'X'));
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
//  	char			c = 'a';
// 	char			*s = "Ciao mamma";
// 	int				a = 42;
// 	char			*p = s;
// 	unsigned int	b = 236;

// 	printf("STAMPA CON PRINTF:\n");
// 	printf("Carattere: %c\n", c);
// 	printf("Stringa: %s\n", s);
// 	printf("Indirizzo puntatore: %p\n", p);
// 	printf("Numero decimale: %d\n", a);
// 	printf("Numero intero: %i\n", a);
// 	printf("Numero decimale senza segno: %u\n", b);
// 	printf("Numero esadecimale minuscolo: %x\n", a);
// 	printf("Numero esadecimale maiuscolo: %X\n", a);
// 	printf("Percentuale: %%\n\n");
// 	ft_printf("STAMPA CON FT_PRINTF:\n");
// 	ft_printf("Carattere: %c\n", c);
// 	ft_printf("Stringa: %s\n", s);
// 	ft_printf("Indirizzo puntatore: %p\n", p);
// 	ft_printf("Numero decimale: %d\n", a);
// 	ft_printf("Numero intero: %i\n", a);
// 	ft_printf("Numero decimale senza segno: %u\n", b);
// 	ft_printf("Numero esadecimale minuscolo: %x\n", a);
// 	ft_printf("Numero esadecimale maiuscolo: %X\n", a);
//  	ft_printf("Percentuale: %%\n");
// 	return (0);
// }
