# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ypikul <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/10 19:05:50 by ypikul            #+#    #+#              #
#    Updated: 2017/08/10 20:40:55 by ypikul           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_tail
SRC		=	ft_tail.c

all: $(NAME)

$(NAME): $(SRC)
	gcc -Wall -Wextra -Werror -c $^
	gcc -o $@ ft_tail.o

clean:
	rm -f ft_tail.o

fclean: clean
	rm -f $(NAME)

re: fclean all
