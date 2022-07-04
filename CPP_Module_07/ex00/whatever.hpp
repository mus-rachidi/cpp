/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:12:54 by murachid          #+#    #+#             */
/*   Updated: 2022/03/06 10:38:37 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHETEVER_HPP
#define WHETEVER_HPP

#include <iostream>

template <typename T>

T   max(T& x ,T& y)
{
    return (x > y) ? x : y;
}

template <typename T>

T   min(T& x ,T& y)
{
    return (x < y) ? x : y;
}

template <typename T>

void  swap(T& x ,T& y)
{
    T tmp;
    tmp = x;
    x = y;
    y = tmp;
}

#endif