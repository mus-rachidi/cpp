/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:08:36 by murachid          #+#    #+#             */
/*   Updated: 2022/03/22 22:13:50 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        std::vector<int> arr;
        unsigned int n_size;
    public:
        unsigned int con;
        Span(unsigned int N);
        Span( void );
        Span( const Span & old_obj);
        Span & operator=(const Span & old_obj);
        void addNumber(int i);
        int shortestSpan() const;
        int longestSpan() const;
        int    grand() const;
        unsigned int	size( void ) const;
        ~Span();
};

std::ostream &	operator<<( std::ostream & ostr, Span const & instance);

#endif