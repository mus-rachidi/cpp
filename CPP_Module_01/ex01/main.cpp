/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:24:21 by murachid          #+#    #+#             */
/*   Updated: 2022/01/31 17:24:22 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie;
    zombie = zombieHorde(5, "zombie");
    for(int i = 0 ; i < 5; i++)
        zombie[i].announce();
    delete[] zombie;
}