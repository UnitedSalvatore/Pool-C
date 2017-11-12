# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ypikul <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/13 21:34:24 by ypikul            #+#    #+#              #
#    Updated: 2017/08/13 21:53:06 by ypikul           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	eval_expr
FILENAMES	=	main.c ft_putnbr.c parse_factor.c parse_sum.c \
				delete_spaces.c ft_putchar.c parse_product.c

CC			=	gcc
CFLAGS		?=	-Wall -Wextra -Werror
CFLAGS		+=	-I$(INCLUDE)
INCLUDE		=	./includes/

SRC			=	$(addprefix ./srcs/,$(FILENAMES))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)       

re: fclean all
