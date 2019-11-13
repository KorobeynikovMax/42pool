# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bedavis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/13 13:19:52 by bedavis           #+#    #+#              #
#    Updated: 2019/09/04 13:16:45 by bedavis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJECT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADER = includes/ft.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(FILES) -I $(HEADER)
	ar rc libft.a $(OBJECT)
	ranlib libft.a

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
