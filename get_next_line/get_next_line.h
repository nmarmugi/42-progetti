/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:05:24 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/25 18:06:20 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

char	*get_next_line_bonus(int fd);
char	*ft_strchr_bonus(const char *s, int c);
size_t	ft_strlen_bonus(const char *str);
char	*ft_strjoin_bonus(char const *s1, char const *s2);
void	*ft_calloc_bonus(size_t n, size_t size);
char	*ft_substr_bonus(char const *s, unsigned int start, size_t len);

#endif