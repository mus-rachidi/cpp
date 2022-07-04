/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:12:57 by murachid          #+#    #+#             */
/*   Updated: 2022/03/06 10:42:46 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>

void display(const T&  character)
{
    std::cout<< character << std::endl;   
}

template <typename T>

void iter(T *str, int len , void (*func)(const T &))
{
    for(int i = 0; i < len; i++)
        func(str[i]);
}

#endif