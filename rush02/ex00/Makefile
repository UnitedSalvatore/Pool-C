# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ypikul <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/10 15:43:04 by ypikul            #+#    #+#              #
#    Updated: 2017/08/13 16:10:29 by ypikul           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	rush-2
RUSH0F		=	rush00.c rush01.c rush02.c rush03.c rush04.c
RUSH0SRC	=	$(addprefix rush02/srcs/rush00/, $(RUSH0F))
RUSH0BLD	=	$(addprefix build/, $(RUSH0F:.c=.o))
RUSH2F		=	count_size.c ft_addline.c read_stdin.c rush_compare.c rush_creator.c \
				ft_strcmp.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_print_result.c
RUSH2SRC	=	$(addprefix rush02/srcs/, $(RUSH2F))
RUSH2BLD	=	$(addprefix build/, $(RUSH2F:.c=.o))
MAIN		=	rush02/srcs/main.c
LIB			=	libft.a

CC			=	gcc
CFLAGS		?=	-Wall -Wextra -Werror
CFLAGS		+=	-I./rush02/includes

.PHONY: all clean fclean re

all: $(NAME)

build:
	mkdir build/

build/%.o: rush02/srcs/rush00/%.c | build
	$(CC) $(CFLAGS) -c $< -o $@

build/%.o: rush02/srcs/%.c | build
	$(CC) $(CFLAGS) -c $< -o $@

$(LIB): $(RUSH0BLD) $(RUSH2BLD)
	ar crs $@ $(RUSH0BLD) $(RUSH2BLD)

$(NAME): $(MAIN) $(LIB)
	$(CC) $(CFLAGS) -o $@ $(MAIN) $(LIB)
	$(CC) -Wall -Wextra -Werror -o rush-00 rush00/ft_atoi.c rush00/ft_putchar.c rush00/main.c rush00/rush00.c
	$(CC) -Wall -Wextra -Werror -o rush-01 rush00/ft_atoi.c rush00/ft_putchar.c rush00/main.c rush00/rush01.c
	$(CC) -Wall -Wextra -Werror -o rush-02 rush00/ft_atoi.c rush00/ft_putchar.c rush00/main.c rush00/rush02.c
	$(CC) -Wall -Wextra -Werror -o rush-03 rush00/ft_atoi.c rush00/ft_putchar.c rush00/main.c rush00/rush03.c
	$(CC) -Wall -Wextra -Werror -o rush-04 rush00/ft_atoi.c rush00/ft_putchar.c rush00/main.c rush00/rush04.c

clean:
	rm -rf build/

fclean: clean
	rm -f $(NAME)
	rm -f $(LIB)
	rm -f rush-00
	rm -f rush-01
	rm -f rush-02
	rm -f rush-03
	rm -f rush-04

re: fclean all
