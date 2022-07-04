# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: murachid <murachid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/27 20:42:57 by murachid          #+#    #+#              #
#    Updated: 2022/03/02 21:38:06 by murachid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

CC = C++
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