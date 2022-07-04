/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casting.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:46:54 by murachid          #+#    #+#             */
/*   Updated: 2022/03/03 11:38:05 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTING_HPP
#define CASTING_HPP
#include <iostream>
#include <cstring>
#include <climits>
#include <cmath>
#include <iomanip>

class casting
{
    private:
        int int_val;
        char char_val;
        float float_val;
        double double_val;
        double  var;
        bool var_check;
    public:
        char GetChar()const;
        int GetInt()const;
        double GetDouble() const ;
        float GetFloat()const;
    
        void SetChar();
        void SetInt();
        void SetDouble();
        void SetFloat();


        void convert_double_or_char(char **str);
        double GetVar()const;

        void printChar(std::ostream &out)const;
        void printInt(std::ostream &out)const;
        void printDouble(std::ostream &out)const;
        void printFloat(std::ostream &out)const;
        casting();
        casting(const casting &obj);
        casting(char **inp);
        casting & operator=(const casting & obj);
        ~casting();
};

std::ostream & operator<<(std::ostream &out, const casting &obj);

#endif