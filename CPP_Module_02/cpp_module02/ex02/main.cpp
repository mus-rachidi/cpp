/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:48:11 by murachid          #+#    #+#             */
/*   Updated: 2022/02/05 09:34:47 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed const c( Fixed( 5.05f ) - Fixed( 2 ) );
    Fixed const d( Fixed( 5.05f ) / Fixed( 2 ) );
    Fixed const e( Fixed( 5.05f ) + Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a-- << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::max( 5, 2 ) << std::endl;
    std::cout << Fixed::min( 3, 7 ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;

    return 0;
}
