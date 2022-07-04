/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:26:07 by murachid          #+#    #+#             */
/*   Updated: 2022/02/20 14:50:41 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45), target("")
{
    std::cout << "default constructor is call" << std::endl; 
}

RobotomyRequestForm::RobotomyRequestForm(const std::string & target) : Form("RobotomyRequestForm", 72, 45), target(target)
{
    std::cout << "default constructor is calRobotomyRequestForm_HPPl" << std::endl; 
}

const std::string RobotomyRequestForm::getTarget()
{
    return(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &obj) : Form("RobotomyRequestForm", 72, 45), target(obj.getTarget())
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    if(this == &obj)
        return;
    *this = obj;
    return;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm &obj)
{
    std::cout << "assignment operator called" << std::endl;
    if(this == &obj)
        return (*this);
    obj.getTarget();
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & execute)
{
    this->check_exception_excution(execute);
	if (std::rand() % 2)
		std::cout << "The victi... " << this->target << " has been successfull"
			"y robotomized" << std::endl;
	else
		std::cout << "The robotomization on " << this->target << " may or may "
			"not have been a complete and utter failure." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Bureaucrat destructor call" << std::endl;
}