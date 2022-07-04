/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:52:38 by murachid          #+#    #+#             */
/*   Updated: 2022/02/15 15:17:29 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string n , int g) : name(n), grade(g)
{
    std::cout << "standar constructor is call" << std::endl;
    check_exception();
}
// virtual const char* Bureaucrat::GradeTooHighException::what() const
// {
//     return "my high exception happend";
// }
Bureaucrat::Bureaucrat()
{
    std::cout << "default constructor is call" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & old_obj)
{    
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    if(this == &old_obj)
        return;
    *this = old_obj;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & obj)
{
    std::cout << "assignment operator called" << std::endl;
    if(this == &obj)
        return (*this);
    this->grade = obj.grade;
    return (*this);
}

void Bureaucrat::check_exception() const
{
    if(this->grade < 1)
       throw Bureaucrat::GradeTooLowException();
    if(this->grade > 150)   
       throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::Increment()
{
    if(this->grade + 1 <= 150)
        this->grade++;
    check_exception();
}

void Bureaucrat::Decrement()
{
    if(this->grade - 1 >= 1)
        this->grade--;
    check_exception();
}

std::ostream & operator<<(std::ostream &output,  Bureaucrat const &old)
{
    output << old.getName() << " , bureaucrat grade " << old.getGrade()<< std::endl;
    return (output);
}

int Bureaucrat::getGrade() const
{
    return(this->grade);
}

std::string Bureaucrat::getName() const
{
    return(this->name);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor call" << std::endl;
}