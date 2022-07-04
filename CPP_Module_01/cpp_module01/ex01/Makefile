# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: murachid <murachid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/31 17:24:24 by murachid          #+#    #+#              #
#    Updated: 2022/02/02 14:27:45 by murachid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombies

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ZombieHorde.cpp main.cpp Zombie.cpp\

all : $(NAME) 

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC)  -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all