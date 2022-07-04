/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:34:26 by murachid          #+#    #+#             */
/*   Updated: 2022/03/03 12:43:15 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Base	*generate(void)
{
	Base	*instance = NULL;
  	srand (time(NULL));

	int random = rand() % 3;
	if (random == 1) 
	{
		instance = new A;
		std::cout << "randomly instanciate is : A " << std::endl << std::endl;
	}
	else if (random == 2) 
	{
		instance = new B;
		std::cout << "randomly instanciate is : B " << std::endl << std::endl;
	}
	else 
	{
		instance = new C;
		std::cout << "randomly instanciate is : C " << std::endl << std::endl;
	}
	return (instance);
}

void	identify(Base* p)
{
	std::cout <<  "by pointer  ==> the actual type of the object pointed :"  << std::endl;
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL) 
		std::cout << "C" << std::endl;
	else 
		std::cout << "Undefined class" << std::endl;
}

void identify(Base& p)
{
	std::cout <<  "by reference ==> the actual type of the object pointed :"  << std::endl;
	try
	{
		A	a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
  	catch(std::bad_cast exp)
    {
    	//std::cout<<"bad cast to A\n";
    }
	try
	{
		B	b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
    catch(std::bad_cast exp)
    {
    	//std::cout<<"bad cast to B \n";
    }
	try
	{
		C	c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
  	catch(std::bad_cast exp)
    {
    	//std::cout<<"bad cast to C\n";
    }
}
