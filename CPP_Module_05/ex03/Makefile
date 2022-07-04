# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: murachid <murachid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/12 21:52:45 by murachid          #+#    #+#              #
#    Updated: 2022/02/18 12:58:23 by murachid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = *.cpp
all : $(NAME)

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	
clean:
	@rm -rf $(NAME)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all
