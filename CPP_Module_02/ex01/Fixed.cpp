/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:47:51 by murachid          #+#    #+#             */
/*   Updated: 2022/02/04 21:06:11 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::nb_f = 8;

std::ostream &operator<<(std::ostream &os, Fixed const &m) 
{ 
    return os << m.toFloat();
}

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fp = 0;
}

Fixed::Fixed(const int i)
{
    this->fp = i << nb_f;
    std::cout << " converts int to the corresponding fixed-point value" << std::endl;
}

Fixed::Fixed(const float f)
{
    this->fp = roundf(f * (1 << nb_f));
    std::cout << " converts float to the corresponding fixed-point value" << std::endl;
}

Fixed::Fixed(const Fixed &a)
{
    *this = a;
    std::cout<< "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed&c)
{
    this->fp = c.fp;
    std::cout << "Assignation operator called" << std::endl;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
    return (float(this->fp) / (1 << nb_f));
}

int Fixed::toInt( void ) const
{
   return (this->fp >> nb_f);
}
