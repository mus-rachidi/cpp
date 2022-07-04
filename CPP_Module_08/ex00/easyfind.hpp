/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 09:14:56 by murachid          #+#    #+#             */
/*   Updated: 2022/03/19 23:13:40 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

template <class T>

void ft_find(T  &f_var, int s_var)
{
    typename T::iterator it;
    it = find (f_var.begin(), f_var.end(), s_var);
    if (it != f_var.end())
        std::cout << "Element found in f_var: " << *it << '\n';
    else
    {
        std::cout << "Element not found in f_var\n";
        throw "There is no elements";
    }
}

#endif