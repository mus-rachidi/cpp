# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: murachid <murachid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 13:41:16 by murachid          #+#    #+#              #
#    Updated: 2022/02/10 10:31:02 by murachid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = ClapTrap.cpp main.cpp ScavTrap.cpp

all : $(NAME) 

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC)  -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all