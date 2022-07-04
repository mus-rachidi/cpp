/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:52:43 by murachid          #+#    #+#             */
/*   Updated: 2022/02/20 15:02:38 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Form			*form = NULL;
	Bureaucrat		man("man", 9);

    std::cout << "--------------------PresidentialPardonForm------------------"<<std::endl;
	try
	{
		form = new ShrubberyCreationForm("target3");

		man.signForm(*form);
		//form->beSigned(man);
		man.executeForm(*form);
		form->execute(man);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	// try
	// {
	// 	form = new PresidentialPardonForm("target1");
	// 	form->execute(man);
	// 	delete form;
	// 	form = NULL;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

    // std::cout << "--------------------singe------------------"<<std::endl;

	// try
	// {
	// 	form = new PresidentialPardonForm("target2");
	// 	form->beSigned(man);
	// 	delete form;
	// 	form = NULL;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

    // std::cout << "--------------------RobotomyRequestForm--------------------"<<std::endl;

	// try
	// {
	// 	form = new RobotomyRequestForm("target3");
	// 	form->execute(man);
	// 	delete form;
	// 	form = NULL;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// try
	// {
	// 	form = new RobotomyRequestForm("target3");
	// 	form->beSigned(man);
	// 	form->execute(man);
	// 	delete form;
	// 	form = NULL;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
    // std::cout << "--------------------ShrubberyCreationForm--------------------"<<std::endl;
	// try
	// {
	// 	form = new ShrubberyCreationForm("target3");
	// 	form->execute(man);
	// 	delete form;
	// 	form = NULL;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// try
	// {
	// 	form = new ShrubberyCreationForm("target3");
	// 	form->beSigned(man);
	// 	form->execute(man);
	// 	delete form;
	// 	form = NULL;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
}
