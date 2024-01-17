/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:32:36 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/17 13:31:47 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdint.h>
# include <stdlib.h>

void	ft_put_ptr(uintptr_t num);
char	*ft_itoa(int n);
int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_print_ptr(unsigned long long ptr);
int		ft_ptr_len(uintptr_t num);
int		ft_percent(void);
int		ft_printnbr(int n);

#endif
