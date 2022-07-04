/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:20:06 by murachid          #+#    #+#             */
/*   Updated: 2022/02/12 11:44:54 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() 
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string str) : type(str)
{
    std::cout << "Animal string constructor called" << std::endl;
}

Animal::Animal(Animal const &a)
{
    this->type = a.type;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal & Animal::operator=(Animal const &a)
{
    if (this == &a)
        return *this;
    this->type = a.type;
    std::cout << "assignment operator called" << std::endl;
    return (*this);
}

std::string Animal::getType() const
{
    return(this->type);
}

Animal::~Animal()
{
    std::cout << "Animal destructors called" << std::endl;
}
