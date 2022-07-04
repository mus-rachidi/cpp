/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:48:08 by murachid          #+#    #+#             */
/*   Updated: 2022/02/05 09:35:05 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <math.h>

class Fixed
{
    private:
        int fp;
        static const int nb_f;
    public:
        Fixed();
        Fixed(const int integer); 
        Fixed(const float f);
        Fixed(const Fixed  &c);
        Fixed& operator = (const Fixed& aa);
        Fixed& operator ++ ();
        Fixed& operator ++ (int);
        Fixed& operator -- ();
        Fixed& operator -- (int);
        Fixed	operator / (Fixed const & src) const;
        Fixed	operator * (Fixed const & src) const;
        Fixed	operator - (Fixed const & src) const;
        Fixed	operator + (Fixed const & src) const;
        static Fixed   max(Fixed const & b, Fixed const & a);
        static Fixed   min(Fixed const & b, Fixed const & a);
        static Fixed   max(Fixed  & b, Fixed  & a); 
        static Fixed   min(Fixed  & b, Fixed  & a); 
        ~Fixed();
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& dt);

#endif