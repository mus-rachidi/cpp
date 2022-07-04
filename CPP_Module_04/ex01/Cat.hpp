/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:20:13 by murachid          #+#    #+#             */
/*   Updated: 2022/02/12 11:46:33 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* brain;
    public:
        Cat();
        void makeSound() const;
        Cat(std::string str);
        Cat(Cat const &a);
        Cat & operator=(Cat const &a);
        std::string GetIdeas();
        void SetIdeas( std::string ideas);
        Cat(Brain const &brain);
        virtual ~Cat();
};

#endif