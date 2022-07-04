/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:20:42 by murachid          #+#    #+#             */
/*   Updated: 2022/02/02 14:20:43 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
    std::cout<< "default constructor call" << std::endl;
}

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with his " 
    << this->weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout<< "default destructor call" << std::endl;
}