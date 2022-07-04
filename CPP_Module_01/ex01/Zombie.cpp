/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:24:26 by murachid          #+#    #+#             */
/*   Updated: 2022/01/31 17:24:27 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout<<"constructor default "<< std::endl;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}

void Zombie::announce()
{
    std::cout<< this->name << " BraiiiiiiinnnzzzZ..." << std::endl; 
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " is died" << std::endl;
}