/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:26:03 by murachid          #+#    #+#             */
/*   Updated: 2022/02/18 12:34:43 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5), target("")
{
    std::cout << "default constructor is call" << std::endl; 
}

PresidentialPardonForm::PresidentialPardonForm(const std::string & target) : Form("PresidentialPardonForm", 25, 5), target(target)
{
    std::cout << "default constructor is call" << std::endl; 
}

const std::string PresidentialPardonForm::getTarget()
{
    return(target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &obj) : Form("PresidentialPardonForm", 25, 5), target(obj.getTarget())
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    if(this == &obj)
        return;
    *this = obj;
    return;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm &obj)
{
    std::cout << "assignment operator called" << std::endl;
    if(this == &obj)
        return (*this);
    obj.getTarget();
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & execute)
{
    this->check_exception_excution(execute);
  	std::cout << this->target << " has been pardoned by Zafod Beeblebrox."
		<< std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Bureaucrat destructor call" << std::endl;
}