/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCatngCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:59:59 by murachid          #+#    #+#             */
/*   Updated: 2022/02/11 00:01:04 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(std::string str) :  WrongAnimal(str)
{
    std::cout << "WrongCat string constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &a) 
{
    this->type = a.type;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const &a)
{
    if (this == &a)
        return *this;
    this->type = a.type;
    std::cout << "WrongCat assignment operator called" << std::endl;
    return(*this);
}

void WrongCat::makeSound() const
{
    std::cout<<"mayoooo...... " << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructors called" << std::endl;
}