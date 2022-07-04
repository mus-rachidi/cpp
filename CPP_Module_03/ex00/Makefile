# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: murachid <murachid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 12:15:15 by murachid          #+#    #+#              #
#    Updated: 2022/02/10 10:31:07 by murachid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = ClapTrap.cpp main.cpp

all : $(NAME) 

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC)  -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all