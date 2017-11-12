# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ypikul <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/16 22:36:26 by ypikul            #+#    #+#              #
#    Updated: 2017/08/16 22:39:40 by ypikul           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	bsq
FILENAME	=	best_print.c count_size.c read_file.c bod_pik.c cut_line.c take_params.c bp_find_bsq.c ft_strlen.c validate.c bp_max_and_pos.c
SRC			=	$(addprefix srcs/, $(FILENAME))
MAIN		=	srcs/main.c

CC			=	gcc
CFLAGS		?=	-Wall -Wextra -Werror
CFLAGS		+=	-I./includes

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(MAIN) $(LIB)
	$(CC) $(CFLAGS) -o $@ $(MAIN) $(SRC)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
