# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ypikul <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/07 14:48:26 by ypikul            #+#    #+#              #
#    Updated: 2017/08/07 20:17:22 by ypikul           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
FILENAMES	=	ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRC			=	$(addprefix srcs/, $(FILENAMES))

CC		=	gcc
CFLAGS	?=	-c -Wall -Wextra -Werror
CFLAGS	+=	-I ./includes/

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $^
	ar rcs $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
