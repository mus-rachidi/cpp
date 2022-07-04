/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:47:45 by murachid          #+#    #+#             */
/*   Updated: 2022/02/04 18:07:31 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::nb_f = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fp = 0;
}

Fixed::Fixed(const Fixed &a)
{ 
    *this = a;
    std::cout<< "Copy constructor called" <<std::endl;
}

Fixed& Fixed::operator = (const Fixed &b)
{
    this->fp = b.getRawBits();
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fp);  
}

void Fixed::setRawBits(int const raw)
{
   this->fp = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" <<std::endl;
}