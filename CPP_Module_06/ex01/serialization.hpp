/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:41:27 by murachid          #+#    #+#             */
/*   Updated: 2022/03/03 12:06:45 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP
#include <stdint.h>
#include <iostream>

typedef struct s_Data
{
	int			nb;
	std::string	str;
	char		ch;
	void	*ptr_to_nb;
	void	*ptr_to_str;
	void	*ptr_to_ch;
}				t_Data;

uintptr_t	serialize(t_Data* ptr);
t_Data*		deserialize(uintptr_t r);

std::ostream	&operator<<(std::ostream &out, const t_Data &obj);

#endif