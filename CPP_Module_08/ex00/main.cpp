/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 09:14:35 by murachid          #+#    #+#             */
/*   Updated: 2022/03/19 15:18:17 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<char> arr;
    
    for(int i = 40; i < 98; i++)
        arr.push_back(i);
    try
    {
        ft_find(arr,49);
    }
    catch(char const *str)
    {
        std::cerr << str << '\n';
    }
}