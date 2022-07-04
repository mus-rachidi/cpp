/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:20:15 by murachid          #+#    #+#             */
/*   Updated: 2022/02/12 12:07:43 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    this->brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(std::string str) : Animal(str)
{
    std::cout << "Dog string constructor called" << std::endl;
}

Dog::Dog(Dog const &a)
{
    this->brain = new Brain;
    this->type = a.type;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::Dog(Brain const &brain) 
{
	this->brain = new Brain(brain);
}

Dog & Dog::operator=(Dog const &a)
{
    if (this == &a)
        return *this;
    this->type = a.type;
    std::cout << "Dog assignment operator called" << std::endl;
    return(*this);
}

void Dog::SetIdeas( std::string ideas)
{
    brain->SetIdeas(ideas);
}

std::string Dog::GetIdeas()
{
    return(brain->GetIdeas());
}

void Dog::makeSound() const
{
    std::cout<<"Woof Woof .... " << std::endl;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "delete brain of dog" << std::endl;
}