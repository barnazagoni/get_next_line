# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/09 19:46:37 by bzagoni           #+#    #+#              #
#    Updated: 2017/12/13 16:09:55 by bzagoni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -c -Wall -Wextra -Werror


all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I. *.c
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
	gcc $(FLAGS) -I. *.c
	ar rc $(NAME) *.o
	ranlib $(NAME)
