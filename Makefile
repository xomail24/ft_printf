# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icheri <icheri@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 00:23:48 by icheri            #+#    #+#              #
#    Updated: 2021/12/23 16:11:09 by icheri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a

SRCS			=	ft_itoa.c		ft_printf_c.c	ft_printf_d.c\
					ft_printf_p.c	ft_printf_s.c	ft_printf_x.c\
					ft_printf.c		ft_strlen.c

HEADER			= ft_printf.h
OBJ				= $(SRCS:.c=.o)

CC				= gcc
CFLAGS			= -Wall -Wextra -Werror -I$(HEADER)

.PHONY:			all clean fclean re

all:			$(NAME)

$(NAME):		$(OBJ) $(HEADER)
				ar rcs $(NAME) $?

%.o:			 %.c $(HEADER)
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				rm -f $(OBJ) $(OBJ_B)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all
