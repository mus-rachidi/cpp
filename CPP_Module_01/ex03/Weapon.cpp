/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:20:55 by murachid          #+#    #+#             */
/*   Updated: 2022/02/02 14:20:56 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
    this->str = str;
    std::cout << "default constructor call" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "default destructor call" << std::endl;
}

void    Weapon::setType(std::string str)
{
    this->str = str;
}

const   std::string &Weapon::getType()
{
    return this->str;
}