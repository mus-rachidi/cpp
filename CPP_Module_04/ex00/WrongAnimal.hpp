/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:59:56 by murachid          #+#    #+#             */
/*   Updated: 2022/02/11 00:02:31 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string str);
        WrongAnimal(WrongAnimal const &a);
        WrongAnimal & operator=(WrongAnimal const &a);
        void makeSound() const;
        std::string getType() const;
        ~WrongAnimal();
};

#endif