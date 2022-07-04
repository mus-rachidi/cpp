# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: murachid <murachid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 14:20:34 by murachid          #+#    #+#              #
#    Updated: 2022/02/02 14:28:45 by murachid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Karen

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = *.cpp\

all : $(NAME) 

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC)  -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all