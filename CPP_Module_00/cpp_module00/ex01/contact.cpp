/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:33:22 by murachid          #+#    #+#             */
/*   Updated: 2022/01/31 14:10:33 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::set_contact(int index)
{
    this->Index = index;
    std::cout << "first name : ";
    std::getline (std::cin, this->first_name);    
    std::cout << "last name : ";
    std::getline (std::cin, this->last_name);    
    std::cout << "nickname : ";
    std::getline (std::cin, this->nickname);    
    std::cout << "phone number : ";
    std::getline (std::cin, this->phone_number);    
    std::cout << "darkest secret : ";
    std::getline (std::cin, this->darkest_secret);
    return;
}

void Contact::get_contact(void)
{
    std::cout << "first name : " << this->first_name << std::endl;
    std::cout << "last name : " << this->last_name << std::endl;
    std::cout << "nickname : "<< this->nickname << std::endl;
    std::cout << "phone number : " << this->phone_number << std::endl;
    std::cout << "darkest secret : "<< this->darkest_secret << std::endl;
    return;
}

void    Contact::utile(std::string s, std::string p)
{
    int i;
    int j;
    i = 11 - s.size();
    if (s.size() > 10)
    {
        j = 0;
        while(s[j])
        {
            if(j == 9)
            {
                std::cout<< "." << std::setw(i);
                break;
            }
            std::cout<< s[j];
            j++;
        }
    }
    else
        std::cout << s << std::setw(i);
    std::cout << p;
}

void    Contact::print_header(void)
{
    std::string s;
    std::string p;
    p = "|";
    std::cout <<this->Index << std::setw(10);
    std::cout << p;
    utile(this->first_name, p);
    utile(this->last_name, p);
    utile(this->nickname, p);
    std::cout << "\n";
}