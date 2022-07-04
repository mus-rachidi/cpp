/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:20:29 by murachid          #+#    #+#             */
/*   Updated: 2022/02/12 11:10:06 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "call constructor of brain" << std::endl;
}

Brain::Brain(const Brain &old_obj)
{
    std::cout << "call copy constructor of brain" << std::endl;
    for(int i = 0; i < 100; i++)
    {
		this->ideas[i] = old_obj.ideas[i];
	}
}

Brain& Brain::operator=(Brain const &br) 
{
	std::cout << "Assignation operator called of brain" << std::endl;
	for(int i = 0; i < 100; i++)
    {
		this->ideas[i] = br.ideas[i];
	}
	return *this;
}

void Brain::SetIdeas( std::string ideas)
{
    int i = 0;
    while(i < 100)
    {
        this->ideas[i] = ideas;
        i++;
    }
}

std::string Brain::GetIdeas()
{
    return(*this->ideas);
}

Brain::~Brain()
{
    std::cout<<"call distructor of brain" << std::endl;
}