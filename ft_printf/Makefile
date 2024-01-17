# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 11:20:54 by nmarmugi          #+#    #+#              #
#    Updated: 2024/01/17 13:34:10 by nmarmugi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_printf.c \
		ft_SRCS.c \
		ft_PTR.c \
		ft_ITOA.c
		
		
OBJS = $(SRCS:.c=.o)

HDRS =	ft_printf.h

FLAGS = -Wall -Wextra -Werror
$(NAME):
		cc -c $(FLAGS) $(HDRS) $(SRCS)
		ar rc $(NAME) $(OBJS)

all:		$(NAME)
clean:
			rm -f $(OBJS)
fclean:		clean
			rm -f $(NAME)
re:			fclean all
.PHONY:		all clean fclean re bonus