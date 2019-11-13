# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bedavis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/13 14:40:53 by bedavis           #+#    #+#              #
#    Updated: 2019/08/13 15:56:14 by bedavis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = srcs/ft_atoi.c srcs/ft_putnbr.c srcs/ft_putchar.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) main.c $(SRC)

clean:
	/bin/rm -f ft_atoi.o ft_putnbr.o ft_putchar.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
