/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:20:26 by murachid          #+#    #+#             */
/*   Updated: 2022/02/02 16:21:11 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{    
    std::cout<< "constructor call "<<std::endl;
    ptr_ft[0] = &Karen::debug;
    ptr_ft[1] = &Karen::info;
    ptr_ft[2] = &Karen::warning;
    ptr_ft[3] = &Karen::error;
}

Karen::~Karen()
{
    std::cout<< "destructor call" << std::endl;
}

void Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl; 
}

void Karen::info(void)
{    
    std::cout <<"I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"<< std::endl;
}

void Karen::warning( void )
{    
    std::cout <<"I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."<< std::endl;

}

void Karen::error( void )
{    
    std::cout <<"This is unacceptable, I want to speak to the manager now."<< std::endl;
}

void Karen::complain(std::string level)
{
    std::string  level_table[4] = {"debug", "info" ,"warning","error"};
    std::string *ptr = std::find(level_table, level_table + 4, level);
    int x = std::distance(level_table, ptr);
    if(x < 4)
        (this->*ptr_ft[x])();
}
