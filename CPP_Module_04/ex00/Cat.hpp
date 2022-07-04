/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:20:13 by murachid          #+#    #+#             */
/*   Updated: 2022/02/10 23:21:24 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        void makeSound() const;
        Cat(std::string str);
        Cat(Cat const &a);
        Cat & operator=(Cat const &a);
        ~Cat();
};

#endif