/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:20:51 by murachid          #+#    #+#             */
/*   Updated: 2022/02/02 14:20:53 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include "HumanA.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("youssef", club);
        bob.attack();
        club.setType("Gun");
        bob.attack();    
    }
    {
        Weapon club = Weapon("klashnikof");
        HumanB achraf("achraf");
        achraf.setWeapon(club);
        achraf.attack();
        club.setType("klashnikof AK-47");
        achraf.attack();
        Weapon club2 = Weapon("philippine ancient");
        achraf.setWeapon(club2);
        achraf.attack();
    }
}