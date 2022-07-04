/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:46:32 by murachid          #+#    #+#             */
/*   Updated: 2022/02/10 10:37:18 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constractor call" << std::endl;
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap(src)
{
    std::cout << "FragTrap constractor copy call" << std::endl;
}

FragTrap::FragTrap(std::string str) : ClapTrap(str) 
{
    Hitpoints = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout<< "FragTrap constructor call" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const & src)
{
	Name = src.Name;
	Hitpoints = src.Hitpoints;
	Hitpoints = src.Hitpoints;
	Attack_damage = src.Attack_damage;
	std::cout << "FragTrap assignment operator = " << Name << " called" << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << Name << " positive high fives request" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout<< "FragTrap deconstractor call"<< std::endl;
}

