/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:41:20 by murachid          #+#    #+#             */
/*   Updated: 2022/03/02 12:37:48 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "serialization.hpp"

int	main(void)
{
	t_Data		data;

	data.nb = 1995;
	data.ch = 'm';
	data.str = "hello world";
	data.ptr_to_nb = &data.nb;
	data.ptr_to_ch = &data.ch;
	data.ptr_to_str = &data.str;
	std::cout <<"-------------------------------------------" << std::endl;
	std::cout << data << std::endl;
	std::cout <<"-------------------------------------------" << std::endl;
	uintptr_t	serial = serialize(&data);
	std::cout << serial << std::endl;
	std::cout <<"-------------------------------------------" << std::endl;
	t_Data		deserial = *deserialize(serial);
	std::cout << deserial << std::endl;
	std::cout <<"-------------------------------------------" << std::endl;
	return 0;
}
