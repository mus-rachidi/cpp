/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:25:13 by murachid          #+#    #+#             */
/*   Updated: 2022/01/31 17:34:05 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{    
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "&str       = " << &str <<std::endl;
    std::cout << "stringPTR  = " << stringPTR <<std::endl;
    std::cout << "&stringREF = " << &stringREF <<std::endl;

    std::cout << "str        = " << str <<std::endl;
    std::cout << "*stringPTR = " << *stringPTR <<std::endl;
    std::cout << "stringREF  = " << stringREF <<std::endl;
    return 0;
}