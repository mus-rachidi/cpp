/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:33:14 by murachid          #+#    #+#             */
/*   Updated: 2022/01/31 12:27:01 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include "contact.hpp"

class PhoneBook{
    private:
        Contact contact[8];
    public:
        void    add_contact(int index);
        void    search_contact(int i);
        void    disply_header(int i);
        int     isNumber(const std::string str);
};

#endif