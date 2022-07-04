/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:47:54 by murachid          #+#    #+#             */
/*   Updated: 2022/02/03 17:55:05 by murachid         ###   ########.fr       */
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
        ~Fixed();
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream& operator << (std::ostream& os, const Fixed& dt);

#endif