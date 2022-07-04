# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: murachid <murachid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 10:57:00 by murachid          #+#    #+#              #
#    Updated: 2022/03/18 10:57:01 by murachid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ex02

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