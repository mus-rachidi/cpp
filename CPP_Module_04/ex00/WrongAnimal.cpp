/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:00:01 by murachid          #+#    #+#             */
/*   Updated: 2022/02/11 00:00:40 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string str) : type(str)
{
    std::cout << "WrongAnimal string constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &a)
{
   this->type = a.type;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &a)
{
    if (this == &a)
        return *this;
     *this = a;
    std::cout << "assignment operator called" << std::endl;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return(this->type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructors called" << std::endl;
}
