/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:26:11 by murachid          #+#    #+#             */
/*   Updated: 2022/02/20 15:05:19 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137), target("")
{
    std::cout << "default constructor is call" << std::endl; 
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : Form("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "default constructor is calShrubberyCreationForm_HPPl" << std::endl; 
}

const std::string ShrubberyCreationForm::getTarget()
{
    return(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &obj) : Form("ShrubberyCreationForm", 145, 137), target(obj.getTarget())
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    if(this == &obj)
        return;
    *this = obj;
    return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm &obj)
{
    std::cout << "assignment operator called" << std::endl;
    if(this == &obj)
        return (*this);
    obj.getTarget();
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & execute)
{
  	std::ofstream	myfile;
	std::string		fileName = this->target + "_shrubbery";

	this->check_exception_excution(execute);
	myfile.open(fileName.c_str(), std::ios::out);
	myfile << "               ,@@@@@@@," << std::endl;
	myfile << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	myfile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888'\'88/8o" << std::endl;
	myfile << "   ,%&'\'%&&%&&%,@@@'\'@@@/@@@88'\'88888/88'" << std::endl;
	myfile << "  ,&%%&%&&%,@@@@@/@@@@@@,8888'\'88/8o" << std::endl;
	myfile << "  ,%&'\'%&&%&&%,@@@'\'@@@/@@@88'\'88888/88'" << std::endl;
	myfile << "  %&&%&%&/%&&%@@'\'@@/ /@@@88888'\'88888'" << std::endl;
	myfile << "   %&&%/ %&%%&&@@'\' V /@@' `88'\'8 `/88'" << std::endl;
	myfile << "   `&%'\' ` /%&'    |.|       '\''|8'" << std::endl;
	myfile << "       |o|        | |         | |" << std::endl;
	myfile << "       |.|        | |         | |" << std::endl;
	myfile << "       \\/ ._'\'/'/_/__/  ,'\'_//__\\/.  '\'_//__/_" << std::endl;
	myfile.close();
	std::cout << "Created the shrug in " << this->target << "_shrubbery"
		<< std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Bureaucrat destructor call" << std::endl;
}