# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ypikul <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/10 15:43:04 by ypikul            #+#    #+#              #
#    Updated: 2017/08/10 16:47:18 by ypikul           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ft_display_file
FILENAMES	=	ft_check_error.c ft_display_file.c
SOURCES		=	$(addprefix srcs/, $(FILENAMES))
OBJECTS		=	$(FILENAMES:.c=.o)
MAIN		=	srcs/main.c
LIB			=	libft.a

CC			=	gcc
CFLAGS		?=	-Wall -Wextra -Werror
CFLAGS		+=	-I includes

.PHONY: all clean fclean re

all: $(NAME)

$(LIB): $(SOURCES)
	$(CC) $(CFLAGS) -c $^
	ar crs $@ $(OBJECTS)

$(NAME): $(LIB)
	$(CC) $(CFLAGS) -o $@ $(MAIN) $(LIB)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)
	rm -f $(LIB)
