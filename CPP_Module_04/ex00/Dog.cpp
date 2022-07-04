/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:20:15 by murachid          #+#    #+#             */
/*   Updated: 2022/02/12 12:10:18 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(std::string str) : Animal(str)
{
    std::cout << "Dog string constructor called" << std::endl;
}

Dog::Dog(Dog const &a)
{
    this->type = a.type;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog & Dog::operator=(Dog const &a)
{
    if (this == &a)
        return *this;
    this->type = a.type;
    std::cout << "Dog assignment operator called" << std::endl;
    return(*this);
}

void Dog::makeSound() const
{
    std::cout<<"Woof Woof .... " << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructors called" << std::endl;
}