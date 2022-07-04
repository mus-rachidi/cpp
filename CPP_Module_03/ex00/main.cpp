/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:15:12 by murachid          #+#    #+#             */
/*   Updated: 2022/02/09 23:07:52 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("a");
	ClapTrap	b("b");
	std::cout << std::endl;


	a.SetDamage(4);
	b.SetDamage(2);

	a.attack("b");
	std::cout << std::endl;

	
	b.takeDamage(a.GetDamage());
	std::cout << std::endl;


	b.attack("a");
	b.beRepaired(6);
	std::cout << std::endl;



	b.SetDamage(30);
	b.attack("a");
	std::cout << std::endl;
	a.takeDamage(b.GetDamage());
	std::cout << std::endl;
	a.attack("b");
	std::cout << std::endl;
	b.takeDamage(a.GetDamage());
	return (0);
}