# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: murachid <murachid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/06 10:12:52 by murachid          #+#    #+#              #
#    Updated: 2022/03/06 10:13:57 by murachid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever

CC = c++
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