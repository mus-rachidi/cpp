/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:46:27 by murachid          #+#    #+#             */
/*   Updated: 2022/02/10 10:39:08 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
int	main(void)
{
	FragTrap	a;
	ScavTrap	b("b");

	std::cout << std::endl;
	a.attack("b");
	b.takeDamage(a.GetDamage());
	std::cout << std::endl;
	b.attack("a");
	a.takeDamage(b.GetDamage());
	std::cout << std::endl;
	a.attack("b");
	b.takeDamage(a.GetDamage());
	std::cout << std::endl;
	b.attack("a");
	a.takeDamage(b.GetDamage());
	std::cout << std::endl;
	b.guardGate();
	std::cout << std::endl;
	a.highFivesGuys();
	std::cout << std::endl;
	return (0);
}