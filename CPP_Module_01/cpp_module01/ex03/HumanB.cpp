/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:20:46 by murachid          #+#    #+#             */
/*   Updated: 2022/02/02 14:20:48 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL)
{
	std::cout << "default constructor call " << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with his ";
	if (this->weapon == NULL)
		std::cout << " fist " << std::endl;
	else
		std::cout << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

HumanB::~HumanB(void)
{
	std::cout << "default destructor call " << std::endl;
}
