# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: volivry <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 13:24:09 by volivry           #+#    #+#              #
#    Updated: 2017/11/09 10:58:59 by volivry          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/ft_putchar.c\
	  ./srcs/ft_putstr.c\
	  ./srcs/ft_strcmp.c\
	  ./srcs/ft_strlen.c\
	  ./srcs/ft_swap.c
HEADER = ./includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC) -I $(HEADER)
	ar rc $(NAME) ft_putchar.o\
		ft_putstr.o\
		ft_strcmp.o\
		ft_strlen.o\
		ft_swap.o
	ranlib $(NAME)

clean:
	rm -f ft_putchar.o\
		ft_putstr.o\
		ft_strcmp.o\
		ft_strlen.o\
		ft_swap.o

fclean: clean
	rm -f $(NAME)

re: fclean all
