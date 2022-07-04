/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:52:43 by murachid          #+#    #+#             */
/*   Updated: 2022/02/20 12:40:05 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {    
        Bureaucrat obj("rachidi", 150);
        obj.Decrement();
        obj.Increment();
        std::cout << obj;    
    }catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "------------------------------"<<std::endl;
    try{
        Bureaucrat buro("rachidi", 123);
        std::cout << buro; 
        Form form("Form", 20, 0);
        buro.signForm(form);
        
    }catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "------------------------------"<<std::endl;
    try{
        Bureaucrat buro("rachidi", 12);
        std::cout << buro; 
        Form form("Form", 20, 0);
        buro.signForm(form);
        
    }catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "------------------------------"<<std::endl;
    try{
        Bureaucrat buro("rachidi", 12);
        Bureaucrat buro_1("adam", 12);

        std::cout << buro; 
        Form form("Form", 20, 0);
        buro.signForm(form);
        buro_1.signForm(form);
    }catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
