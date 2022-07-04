/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:15:10 by murachid          #+#    #+#             */
/*   Updated: 2022/02/08 12:20:50 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    private:
        std::string  Name;
        unsigned int Hitpoints;
        unsigned int Energy_points;
        unsigned int Attack_damage;
    public:
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap & src);
        ClapTrap(void);
        ClapTrap& operator=(ClapTrap const & src);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        unsigned int GetDamage(void)const;
        void SetDamage(unsigned int amount);
        ~ClapTrap();
};

#endif