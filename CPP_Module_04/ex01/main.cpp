/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:20:44 by murachid          #+#    #+#             */
/*   Updated: 2022/02/12 12:47:22 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int     main()
{
	
	Animal* animals[6];
	for (int i = 0; i < 3; i++)
		animals[i] =  new Dog();
	for (int i = 3; i < 6; i++)
		animals[i] =  new Cat();
	for (int i = 0; i < 6; i++)
		delete animals[i];
	std::cout << "-------------------------------------------------" << std:: endl;
	Brain brain;
	Cat cat(brain);
	Dog dog(brain);
	brain.SetIdeas("this is my default ideas !!!!");
	cat.SetIdeas("this is cat ideas !!!!");
	dog.SetIdeas("this is dog ideas !!!!");
	std::cout << brain.GetIdeas() << std::endl;
	std::cout << cat.GetIdeas() << std::endl;
	std::cout << dog.GetIdeas() << std::endl;
}