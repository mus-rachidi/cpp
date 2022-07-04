/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:34:29 by murachid          #+#    #+#             */
/*   Updated: 2022/03/02 12:34:30 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP
#include <iostream>
#include <cstdlib>

class Base { 
	public : virtual ~Base(){}; 
};

class A : public Base {};
class B : public Base {};	
class C : public Base {};

Base *generate(void);
void identify(Base *p);
void identify(Base& p);

#endif