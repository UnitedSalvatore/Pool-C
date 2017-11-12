# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ypikul <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/07 14:48:26 by ypikul            #+#    #+#              #
#    Updated: 2017/08/08 17:35:55 by ypikul           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	do-op
FILENAMES	=	ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
FILENAMES 	+=	ft_atoi.c ft_putnbr.c ft_do_op.c
SRC			=	$(addprefix srcs/, $(FILENAMES))
LIB			=	libft.a	

CC		=	gcc
CFLAGS	?=	-Wall -Wextra -Werror
CFLAGS	+=	-I ./includes/

.PHONY: all clean fclean re

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
	rm -f $(LIB)

re: fclean all

$(LIB): $(SRC)
	$(CC) $(CFLAGS) -c $^
	ar crs $@ *.o

$(NAME): $(LIB)
	$(CC) $(CFLAGS) -o $(NAME) srcs/main.c $(LIB)
