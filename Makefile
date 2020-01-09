# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelouazz <aelouazz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 00:51:21 by aelouazz          #+#    #+#              #
#    Updated: 2020/01/09 08:10:13 by aelouazz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=gnl
INCLUDE=./
FLAGS=-Wall -Wextra -Werror
FILES=main.c get_next_line.c
LIBFT=./libft/libft.a

all: $(NAME)

$(NAME):
	make -s -C ./libft
	gcc $(FLAGS) $(FILES) $(LIBFT) -o $(NAME)

clean:
	make clean -C ./libft

fclean:
	make -s fclean -C ./libft
	rm -rf $(NAME)

re: fclean all
