# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: murachid <murachid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/31 17:25:16 by murachid          #+#    #+#              #
#    Updated: 2022/02/02 14:27:52 by murachid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

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