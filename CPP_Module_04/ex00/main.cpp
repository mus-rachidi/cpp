/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:20:19 by murachid          #+#    #+#             */
/*   Updated: 2022/02/12 12:46:37 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal* a = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    a->makeSound();
    delete(a);
    delete(j);
    delete(i);
    std::cout << "---------------------------"<< std::endl;
    const WrongAnimal* aa = new WrongAnimal();
    const WrongAnimal* ii = new WrongCat();
    std::cout << ii->getType() << " " << std::endl;
    std::cout << aa->getType() << " " << std::endl;
    ii->makeSound();
    aa->makeSound();
    delete(aa);
    delete(ii);
}
