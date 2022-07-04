/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:20:17 by murachid          #+#    #+#             */
/*   Updated: 2022/02/10 23:31:03 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{        
    public:
        Dog();
        Dog(std::string str);
        Dog(Dog const &a);
        Dog & operator=(Dog const &a);
        void makeSound() const;
        ~Dog();
};


#endif