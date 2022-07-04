/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:08:34 by murachid          #+#    #+#             */
/*   Updated: 2022/03/22 22:13:20 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : n_size(0) , con(0)
{
    std::cout << "default constructor called" << std::endl;
}

Span::Span(unsigned int n_size) : arr(0), n_size(n_size) , con(0)
{
    std::cout << "intialize constructor called" << std::endl;
}

Span::Span(const Span & old_object)
{
    *this = old_object;
    std::cout << "copy constructor called" << std::endl;
}

void    Span::addNumber(int i)
{
    if(con < this->n_size)
    {
        arr.push_back(i);
        con++;
    }
    else
		throw "Cannot add any more numbers because out of Range error ";
}

unsigned int	Span::size( void ) const
{
	return  arr.size();
}

int    Span::grand() const
{
    int tmp;
    int i = 0;
    tmp = arr[i];
    for(size_t j = 0 ; j < arr.size() ; j++)
    {
        if(arr[j] > tmp)
            tmp = arr[j];
    }
    return(tmp);
}

int    Span::longestSpan() const
{
    std::vector<const int>::iterator s = std::min_element(arr.begin(), arr.end());
    std::vector<const int>::iterator g = std::max_element(arr.begin(), arr.end());
    return(*g - *s);
}

int     Span::shortestSpan() const
{
    int tmp = grand();
    int res ;
    int n ;
    int arr1[arr.size()];
    for(size_t i = 0; i < arr.size() ; i++)
    {
        arr1[i] = arr[i];
    }
    n = sizeof(arr1) / sizeof(arr1[0]);
	std::sort(arr1, arr1 + n);
    for (int i = 0; i < n - 1 ; i++)
    {
        res = arr1[n - 1 - i] - arr1[n - 2 - i];
        if(res < tmp)
            tmp = res;
    }
    return(tmp);
}

std::ostream &	operator<<( std::ostream & o, Span const & object)
{
	int	shortest = object.shortestSpan();
	int	longest = object.longestSpan();
	o << "Span contains " << object.size() << " numbers, shortest span is "<< shortest << " and longest is " << longest << std::endl;
	return o;
}

Span & Span::operator=(const Span & old_obj)
{
    std::cout << "operator assignment called"<< std::endl;
    if(this != &old_obj)
    {
        this->n_size = old_obj.n_size;
        this->arr = old_obj.arr;
        return(*this);
    }
    else
        return(*this);
}

Span::~Span()
{
    std::cout << "destructor called" << std::endl;
}