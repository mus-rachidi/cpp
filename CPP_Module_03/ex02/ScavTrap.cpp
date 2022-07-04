/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:40:59 by murachid          #+#    #+#             */
/*   Updated: 2022/02/10 10:22:42 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    Hitpoints = 100;
    Energy_points = 50;
    Attack_damage = 20;
    check_guard = 0;
	std::cout << "ScavTrap default constructor " << Name << " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src), check_guard(src.check_guard)
{
	std::cout << "ScavTrap copy constructor " << Name << " called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name), check_guard(0)
{
    Hitpoints = 100;
    Energy_points = 50;
    Attack_damage = 20;
	std::cout << "ScavTrap constructor " << Name << " called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & src)
{
	Name = src.Name;
	Hitpoints = src.Hitpoints;
	Hitpoints = src.Hitpoints;
	Attack_damage = src.Attack_damage;
	std::cout << "ScavTrap assignment operator = " << Name << " called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor " << Name << " called" << std::endl;
}

void ScavTrap::guardGate(void)
{
    if (!Hitpoints)
    {
        std::cout << "ScavTrap " << Name << " switch to guard mode" << std::endl;
        check_guard = 1;
    }
    else
        std::cout<<"ScavTrap haven enterred in Gate keeper mode\n";
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << Name << " attacks " << target << " causing " << Attack_damage << " points of damage!" << std::endl;
}
