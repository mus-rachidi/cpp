/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:20:08 by murachid          #+#    #+#             */
/*   Updated: 2022/02/12 11:44:09 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string str);
        Animal(Animal const &a);
        Animal & operator=(Animal const &a);
        virtual void makeSound() const = 0;
        std::string getType() const;
        virtual ~Animal();
};

#endif