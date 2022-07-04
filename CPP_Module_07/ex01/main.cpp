/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:12:59 by murachid          #+#    #+#             */
/*   Updated: 2022/03/06 11:39:52 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int tab0[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    char tab1[] = "1337";
 	std::string	tab2[3] = {"hello", "world", "ok"};
    iter(tab0, 3, &display);
    iter(tab1, 3, &display);
    iter(tab2, 1, &display);
    return (0);
}

// class Awesome
// {
//     private:
//         int _n;
//     public:
//         Awesome( void ) : _n( 42 ) 
//         { 
//             return; 
//         }
//         int get( void ) const 
//         { 
//             return this->_n; 
//         }
    
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) 
// { 
//     o << rhs.get(); 
//     return o; 
// }

// template< typename T >

// void print( T const & x ) 
// { 
//     std::cout << x << std::endl; 
//     return; 
// }

// int main()
// {
//     int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//     Awesome tab2[5];
//     iter( tab, 5, print );
//    iter( tab2, 5, print );
//     return 0;
// }