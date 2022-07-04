/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:52:43 by murachid          #+#    #+#             */
/*   Updated: 2022/02/15 15:17:42 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {    
        Bureaucrat obj = Bureaucrat("rachidi", 200);
        obj.Increment();
        std::cout << obj;
    } 
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}