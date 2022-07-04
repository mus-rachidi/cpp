/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:13:07 by murachid          #+#    #+#             */
/*   Updated: 2022/03/06 16:05:31 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void )
{
	Array<int>			arr;
	Array<std::string>	str(10);
	Array<std::string>	str1;

	str[0] = "ab";
	str[1] = "cd";	
	str[2] = "ef";
	str[3] = "jh";
	str[4] = "il";
	str[5] = "jk";

	std::cout << "arr.size() = " << arr.ft_size() << std::endl;
	std::cout << "str.size() = " << str.ft_size() << std::endl;
	str1 = str;
	str1[3] = "xy";
	try
	{
		std::cout << str[20] << std::endl;
	}
	catch(const char*e)
	{
		std::cerr << e << '\n';
	}
	try
	{
		std::cout << str1[3] << std::endl;
	}
	catch(const char*e)
	{
		std::cerr << e << '\n';
	}
	try
	{
		std::cout << str[3] << std::endl;
	}
	catch(const char*e)
	{
		std::cerr << e << '\n';
	}

}