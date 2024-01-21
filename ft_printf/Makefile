# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 11:20:54 by nmarmugi          #+#    #+#              #
#    Updated: 2024/01/19 19:31:11 by nmarmugi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_printf.c \
		ft_printf_utils.c \
		ft_printf_hex.c \
		ft_printf_ptr.c \
		
OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror
$(NAME):
		cc -c $(FLAGS) $(SRCS)
		ar rc $(NAME) $(OBJS)

all:		$(NAME)
clean:
			rm -f $(OBJS)
fclean:		clean
			rm -f $(NAME)
re:			fclean all
.PHONY:		all clean fclean re bonus
