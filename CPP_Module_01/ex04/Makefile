# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: murachid <murachid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 14:20:23 by murachid          #+#    #+#              #
#    Updated: 2022/02/02 14:34:36 by murachid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp\

all : $(NAME) 

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC)  -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all