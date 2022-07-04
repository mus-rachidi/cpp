/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:33:19 by murachid          #+#    #+#             */
/*   Updated: 2022/01/31 11:57:15 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact{
    private:
        int Index;
        std::string first_name;
        std::string last_name;
        std::string nickname; 
        std::string phone_number;
        std::string darkest_secret;
    public:
       void get_contact(void);
       void set_contact(int index);
       void print_header(void);
       void utile(std::string s, std::string p);
};

#endif