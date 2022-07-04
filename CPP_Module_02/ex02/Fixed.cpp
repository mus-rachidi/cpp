/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:48:04 by murachid          #+#    #+#             */
/*   Updated: 2022/02/05 09:29:14 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::nb_f = 8;

Fixed& Fixed::operator ++ ()
{
    this->fp++;
    return *this;
}

Fixed& Fixed::operator ++ (int)
{
    ++this->fp;
    return *this;
}

Fixed& Fixed::operator -- ()
{
    this->fp--;
    return *this;
}

Fixed& Fixed::operator -- (int)
{
    --this->fp;
    return *this;
}

Fixed	Fixed::operator+(Fixed const & src) const
{
	Fixed a;
    a = Fixed(this->toFloat() + src.toFloat());
    return(a);
}

Fixed	Fixed::operator-(Fixed const & src) const
{
    Fixed a;
    a = Fixed(this->toFloat() - src.toFloat());
    return(a);
}

Fixed	Fixed::operator*(Fixed const & src) const
{
    Fixed a;
    a = Fixed(this->toFloat() * src.toFloat());
    return(a);
}

Fixed	Fixed::operator/(Fixed const & src) const
{
    Fixed a;
    a = Fixed(this->toFloat() / src.toFloat());
    return(a);
}

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
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
    this->fp = roundf(f * (1 << nb_f));
    std::cout << "Float constructor called" << std::endl;
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

float Fixed::toFloat( void ) const
{
    return (float(this->fp) / (1 << nb_f));
}

int Fixed::toInt( void ) const
{
   return (this->fp >> nb_f);
}

Fixed Fixed::max(Fixed const &b, Fixed const &a)  
{
    if( b.toFloat() > a.toFloat())
        return(b.toFloat());
    return(a.toFloat());
}
Fixed Fixed::max(Fixed  &b, Fixed  &a)  
{
    if( b.toFloat() > a.toFloat())
        return(b.toFloat());
    return(a.toFloat());
}

Fixed Fixed::min(Fixed const &b, Fixed const &a)  
{
    if( b.toFloat() > a.toFloat())
        return(a.toFloat());
    return(b.toFloat());
}

Fixed Fixed::min(Fixed  &b, Fixed  &a)  
{
    if( a.toFloat() > a.toFloat())
        return(a.toFloat());
    return(b.toFloat());
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}