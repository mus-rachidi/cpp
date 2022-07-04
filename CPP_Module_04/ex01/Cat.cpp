/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:20:10 by murachid          #+#    #+#             */
/*   Updated: 2022/02/12 12:06:05 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal("Cat")
{
    this->brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(std::string str) : Animal(str)
{
    std::cout << "Cat string constructor called" << std::endl;
}

Cat::Cat(Brain const &brain)
{
	this->brain = new Brain(brain);
}

Cat::Cat(Cat const &a) 
{
    this->type = a.type;
    this->brain = a.brain;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat & Cat::operator=(Cat const &a)
{
    if (this == &a)
        return *this;
    this->type = a.type;
    this->brain = a.brain;
    std::cout << "Cat assignment operator called" << std::endl;
    return(*this);
}

void Cat::makeSound() const
{
    std::cout<<"meow meow ...... " << std::endl;
}

void Cat::SetIdeas( std::string ideas)
{
    brain->SetIdeas(ideas);
}

std::string Cat::GetIdeas()
{
    return(brain->GetIdeas());
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "delete brain of cat" << std::endl;
}