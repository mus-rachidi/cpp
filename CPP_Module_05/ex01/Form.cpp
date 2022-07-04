/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:57:14 by murachid          #+#    #+#             */
/*   Updated: 2022/02/16 18:18:12 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default") ,   grade_to_signe(0)  , garde_to_excute(0), is_signed(false)
{
    std::cout << "default constructor is call" << std::endl;
    check_exception();
}

Form::Form(std::string name, const int grade_to_signe , const int garde_to_excute) : name(name) , grade_to_signe(grade_to_signe) , garde_to_excute(garde_to_excute) 
{ 
    std::cout << "standar constructor is call" << std::endl;
}

Form::Form(Form const & old_obj) 
: name(old_obj.name) , grade_to_signe(old_obj.grade_to_signe), 
 garde_to_excute(old_obj.garde_to_excute),is_signed(old_obj.is_signed)
{
    std::cout << "Form copy constructor called" << std::endl;
    if(this == &old_obj)
        return;
    *this = old_obj;
}

Form & Form::operator=(Form const & obj)
{
    std::cout << "assignment operator called" << std::endl;
    if(this == &obj)
        return (*this);
    this->is_signed = obj.is_signed;
    return (*this);
}
int Form::grade_signe()
{
    return(grade_to_signe);
}
void    Form::beSigned(Bureaucrat const & obj)
{
    
    if(is_signed == true)
        throw Form::GradeTooLowException1();
    if(obj.getGrade() > grade_to_signe )
        throw Form::GradeTooLowException();
    is_signed = true;
}

void Form::check_exception() const
{
    if(grade_to_signe < 1)
       throw Form::GradeTooLowException();
    if(grade_to_signe > 150)
       throw Form::GradeTooHighException();
}

std::string Form::get_name()
{
    return (this->name);
}

bool Form::get_signed()
{
    return(is_signed);
}
Form::~Form()
{
    std::cout << "Form destructor call" << std::endl;
}