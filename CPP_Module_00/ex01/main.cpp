/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:34:24 by murachid          #+#    #+#             */
/*   Updated: 2022/02/01 09:45:44 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string _operator;
    int nb_contact;
    int i;
    int j;
    i = 0;
    j = 0;
    nb_contact = 0;
    while(1)
    {
        std::cout << "----------------------Entry Option ADD , SEARCH or EXIT" <<std::endl<< "> ";
        std::getline(std::cin, _operator);
        if (_operator == "SEARCH")
            phonebook.search_contact(nb_contact);
        else if (_operator == "EXIT")
            break;
        else if (_operator == "ADD")
        {  
            if (j >= 8)
                j = 0;
            if (nb_contact >= 8)
            {
                phonebook.add_contact(j);
                j++;
            }
            else
            {
                phonebook.add_contact(nb_contact);
                nb_contact++; 
            }
        }
    }
    return (0);
}