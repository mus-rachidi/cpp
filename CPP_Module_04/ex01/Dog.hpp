/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:20:17 by murachid          #+#    #+#             */
/*   Updated: 2022/02/11 21:55:28 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{ 
    private:
        Brain* brain;
    public:
        Dog();
        Dog(std::string str);
        Dog(Dog const &a);
        Dog & operator=(Dog const &a);
        Dog(Brain const &brain);
        std::string GetIdeas();
        void SetIdeas( std::string ideas);
        void makeSound() const;
        virtual ~Dog();
};

#endif