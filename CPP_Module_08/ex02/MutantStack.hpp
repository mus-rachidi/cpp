/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 10:56:58 by murachid          #+#    #+#             */
/*   Updated: 2022/03/22 20:10:11 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>

template <class T>

class MutantStack : public std::stack<T>
{
    public:
        MutantStack<T>( void ) 
        { 
            
        }
        MutantStack<T>( const MutantStack<T> &src )
        { 
            *this = src;
        }
        ~MutantStack<T>( void ) 
        { 
            
        }

        MutantStack<T>	&operator=( const MutantStack<T> &rhs ) 
        {
            (void)rhs;
            return *this;
        }

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator	begin( void ) 
        { 
            return this->c.begin(); 
        }
        iterator	end( void ) 
        { 
            return this->c.end(); 
        }
};

#endif