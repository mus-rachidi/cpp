# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: murachid <murachid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/03 17:48:13 by murachid          #+#    #+#              #
#    Updated: 2022/02/04 18:12:28 by murachid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Fixed.cpp\

all : $(NAME) 

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC)  -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all