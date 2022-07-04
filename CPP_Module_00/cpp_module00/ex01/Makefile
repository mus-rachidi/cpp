# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: murachid <murachid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 18:34:26 by murachid          #+#    #+#              #
#    Updated: 2022/01/31 14:09:39 by murachid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CC = g++ 
CFLAGS = -Wall -Wextra -Werror  

SRC = main.cpp contact.cpp phonebook.cpp\

all : $(NAME) 

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC)  -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all