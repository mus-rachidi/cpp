/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:15:06 by murachid          #+#    #+#             */
/*   Updated: 2022/02/09 22:44:14 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Name("default"), Hitpoints(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap default constructor " << Name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & src) : Name(src.Name), Hitpoints(src.Hitpoints), Energy_points(src.Hitpoints), Attack_damage(src.Attack_damage)
{
	std::cout << "ClapTrap copy constructor " << Name << " called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): Name(name), Hitpoints(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap string constructor " << Name << " called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor " << Name << " called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & src)
{
	Name = src.Name;
	Hitpoints = src.Hitpoints;
	Hitpoints = src.Hitpoints;
	Attack_damage = src.Attack_damage;
	std::cout << "ClapTrap assignment operator = " << Name << " called" << std::endl;
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	if(!Energy_points || !Hitpoints)
		std::cout << "ClapTrap " << Name << " can’t do anything because don't have hit points or points of damage!" << std::endl;
	else
	{
		Energy_points--;
		std::cout << "ClapTrap " << Name << " attacks " << target << " causing " << Attack_damage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << Name << " has taken " << amount << " points of damage" << std::endl;
	if (amount >= Hitpoints)
	{
		Hitpoints = 0;
		std::cout << "ClapTrap " << Name << " died" << std::endl;
	}
	else if (amount >= Energy_points)
	{
		Energy_points = 0;
		std::cout << "ClapTrap " << Name << "'s energy points is now " << Energy_points << std::endl;
	}
	else
	{
		Hitpoints -= amount;
		Energy_points -= amount;
		std::cout << "ClapTrap " << Name << "'s energy points is now " << Energy_points << std::endl;
		std::cout << "ClapTrap " << Name << "'s hit point is now " << Hitpoints << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if(Energy_points)
		Energy_points--;
	else
		Energy_points = 0;
	Hitpoints += amount;
	std::cout<<"ClapTrap "<<Name<<" after repaired itself by "<< amount <<" Hitpoints It have now "<<Hitpoints<<" Hitpoints"<< std::endl;
	std::cout<<"ClapTrap "<<Name<< " after repaired itself cost 1 energy point each It have now "<<Energy_points<< std::endl;
}

unsigned int	ClapTrap::GetDamage(void) const
{
	return (Attack_damage);
}

void	ClapTrap::SetDamage(unsigned int amount) 
{
	this->Attack_damage = amount;
}