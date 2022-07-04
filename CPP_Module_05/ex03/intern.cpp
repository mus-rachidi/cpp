/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:22:16 by murachid          #+#    #+#             */
/*   Updated: 2022/02/21 09:59:31 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intern.hpp"

Intern::Intern()
{
   std::cout << "default constructor is call" << std::endl;
}

Intern::Intern(Intern const &obj)
{
    std::cout << "Intern copy constructor called" << std::endl;
    if(this == &obj)
        return;
    *this = obj;
    return;
}

Form	*Intern::makeForm(const std::string &name, const std::string &target) const
{
	Form	*PtrForm = NULL;
	t_form forms[] = 
	{
		{ "presidential pardon", new PresidentialPardonForm(target) },
		{ "robotomy request", new RobotomyRequestForm(target) },
		{ "shrubbery creation", new ShrubberyCreationForm(target) },
		{ "", NULL }
	};
	for (int i = 0; forms[i].target != NULL; i++)
	{
		if (forms[i].name == name)
			PtrForm = forms[i].target;
		else
			delete forms[i].target;
	}
	if (PtrForm == NULL)
		std::cout << "Intern did not find the form " << name << std::endl;
	else
		std::cout << "Intern creates " << name << std::endl;
	return PtrForm;
}

Intern & Intern::operator=(Intern const &obj)
{
    std::cout << "assignment operator called" << std::endl;
    if(this == &obj)
        return (*this);
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Bureaucrat destructor call" << std::endl;
}
