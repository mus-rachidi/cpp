/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:41:24 by murachid          #+#    #+#             */
/*   Updated: 2022/03/03 12:06:33 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

uintptr_t serialize(t_Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

t_Data* deserialize(uintptr_t r)
{
	return (reinterpret_cast<t_Data *>(r));
}

std::ostream	&operator<<(std::ostream &out, const t_Data &obj)
{
	out << "nb : " << obj.nb << std::endl;
	out << "ptr_to_nb : " << obj.ptr_to_nb << std::endl << std::endl;
	out << "ch : " << obj.ch << std::endl;
	out << "ptr_to_ch : " << obj.ptr_to_ch << std::endl << std::endl;
	out << "str : " << obj.str << std::endl;
	out << "ptr_to_str : " << obj.ptr_to_str << std::endl << std::endl;
	return out;
}

