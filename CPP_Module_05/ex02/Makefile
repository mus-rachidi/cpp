# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: murachid <murachid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/12 21:52:45 by murachid          #+#    #+#              #
#    Updated: 2022/02/21 10:01:55 by murachid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

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
