/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:08:29 by murachid          #+#    #+#             */
/*   Updated: 2022/03/19 13:56:41 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    { 
        Span span(4);
        span.addNumber(100);
        span.addNumber(20);
        span.addNumber(6);
        span.addNumber(1);
        std::cout << span;
    }
    catch(const char * e)
    {
        std::cerr << e << '\n';
    }
    return (0);
}