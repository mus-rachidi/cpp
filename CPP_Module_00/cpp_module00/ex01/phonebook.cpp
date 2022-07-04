/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:33:11 by murachid          #+#    #+#             */
/*   Updated: 2022/02/01 10:06:51 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.hpp"

void PhoneBook::add_contact(int index)
{
    this->contact[index].set_contact(index + 1);
    return;
}

void PhoneBook::disply_header(int i)
{
	std::cout << "\nIndex     |First Name|Last Name |Nickname  |" << std::endl;
    for(int j = 0 ; j < i; j++)
        this->contact[j].print_header();
    std::cout<<"\n";
}

int PhoneBook::isNumber(const std::string str)
{
    int i = 0;
    while (str[i]) 
    {
        if (!isdigit(str[i])) 
            return 1;
        i++;
    }
    return 0;
}

void PhoneBook::search_contact(int i)
{
    int nb;
    std::string index;
    disply_header(i);
    std::cout << "----------------------Entry Index" << std::endl << "> ";
    std::getline (std::cin, index);
    if(index == "" || isNumber(index) == 1)
        nb = 0;
    else
    {
        const char *s = index.c_str();
        nb = std::atoi(s);
    }
    nb--;
    if(nb >= i || nb < 0)
    {
        std::cout<< "\n----------------------Contact Not Exit !!\n" << std::endl;
        return;
    }
    this->contact[nb].get_contact();
    return;
}
