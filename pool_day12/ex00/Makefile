# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bedavis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/15 17:11:45 by bedavis           #+#    #+#              #
#    Updated: 2019/08/15 17:23:56 by bedavis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ft_putchar.c ft_putstr.c

all: $(NAME)

$(NAME):
		@gcc -Wall -Wextra -Werror -o $(NAME) main.c $(SRC)

clean:
		@/bin/rm -f ft_putstr.o ft_putchar.o

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all
