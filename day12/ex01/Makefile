# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ypikul <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/10 19:05:50 by ypikul            #+#    #+#              #
#    Updated: 2017/08/11 11:35:51 by ypikul           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_cat
SRC		=	ft_cat.c

all: $(NAME)

$(NAME): $(SRC)
	gcc -Wall -Wextra -Werror -c $^
	gcc -o $@ ft_cat.o

clean:
	rm -f ft_cat.o

fclean: clean
	rm -f $(NAME)

re: fclean all
