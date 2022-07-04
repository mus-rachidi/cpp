/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:41:07 by murachid          #+#    #+#             */
/*   Updated: 2022/02/10 10:21:10 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("a");
	ClapTrap	b("b");
	
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

	a.guardGate();
	
	std::cout << std::endl;
	return (0);
}