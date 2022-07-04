/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:20:10 by murachid          #+#    #+#             */
/*   Updated: 2022/02/12 12:10:07 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(std::string str) : Animal(str)
{
    std::cout << "Cat string constructor called" << std::endl;
}

Cat::Cat(Cat const &a) 
{
    this->type = a.type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat & Cat::operator=(Cat const &a)
{
    if (this == &a)
        return *this;
    this->type = a.type;
    std::cout << "Cat assignment operator called" << std::endl;
    return(*this);
}

void Cat::makeSound() const
{
    std::cout<<"meow meow ...... " << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructors called" << std::endl;
}