/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casting.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:46:52 by murachid          #+#    #+#             */
/*   Updated: 2022/03/03 12:02:01 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "casting.hpp"

void casting::convert_double_or_char(char **str)
{
    
    if(strlen(str[1]) == 1 && !isdigit(str[1][0]))
        var = static_cast<double>(str[1][0]);
    else if(isdigit(str[1][0]) || (str[1][0] == '-' || str[1][0] == '+' ))
        var = atof(str[1]);
    else 
        var_check = true;
} 

casting::casting() : var_check(false)
{
    std::cout<<"default construction" <<std::endl;
}

casting::casting(char **inp)
{
    convert_double_or_char(inp);
    SetChar();
    SetInt();
    SetDouble();
    SetFloat();
}

casting::casting(const casting &obj)
{
    *this = obj;
    std::cout<<"copy construction" <<std::endl;
}

casting & casting::operator=(casting const &obj)
{
    std::cout<<"assignmment operator construction" <<std::endl;
    if(this == &obj)
        return(*this);
    *this = obj;
    return(*this);
}

char    casting::GetChar() const
{
    return(char_val);
}

int casting::GetInt() const
{
    return(int_val);
}

double casting::GetDouble() const
{
    return(double_val);
}

float casting::GetFloat()const
{
    return(float_val);
}

void    casting::SetChar()
{
    char_val = GetVar();
}

void casting::SetInt()
{
    int_val = GetVar();
}

void casting::SetDouble()
{
    double_val = GetVar();
}

void casting::SetFloat()
{
    float_val = GetVar();
}

double casting::GetVar()const
{
    return(var);
}

void casting::printInt(std::ostream &out) const
{
    if(var_check || (var < INT_MIN || var > INT_MAX))
        out << "int : " << "impossible" << std::endl;
    else if(!std::isinf(var) || (var > INT_MIN || var < INT_MAX))
        out << "int : " << GetInt() << std::endl;
}

void casting::printFloat(std::ostream &out) const
{
     if(var_check)
        out << "float : " << "nanf" << std::endl;
    else
        out << "float : " << GetFloat() << "f" << std::endl;
}

void casting::printChar(std::ostream &out) const
{ 
    if (std::isinf(var) || var_check)
        out << "char : " << "impossible" << std::endl;
    else if(!isprint(var))
        out << "char : " << "non displayable" << std::endl;
    else if(var >= 31 && var <= 127)
        out << "char : '" << GetChar() << "'" <<std::endl;

}

void casting::printDouble(std::ostream &out) const
{
     if(var_check)
        out << "double : " << "nan" << std::endl;
    else
        out << "double : " << GetDouble() << std::endl;
}

std::ostream &operator<<(std::ostream &out , casting const &obj)
{
    obj.printChar(out);
    obj.printInt(out);
    obj.printFloat(out);
    obj.printDouble(out);
    return(out);
}

casting::~casting()
{
}
