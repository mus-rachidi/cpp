/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:47:42 by murachid          #+#    #+#             */
/*   Updated: 2022/02/03 17:47:43 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
    private:
        int fp;
        static const int nb_f;
    public:
        Fixed();
        Fixed(const Fixed  &a);
        Fixed& operator = (const Fixed& b);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif