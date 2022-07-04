/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:26:13 by murachid          #+#    #+#             */
/*   Updated: 2022/02/18 12:45:46 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFROM_HPP
#define SHRUBBERYCREATIONFROM_HPP
#include "Form.hpp"
#include <cstdlib>
#include <fstream>

class ShrubberyCreationForm : public Form
{
    private:
        const std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string & target);
        const std::string getTarget();
        virtual void execute(Bureaucrat const & executor);
        ShrubberyCreationForm(ShrubberyCreationForm &obj);
        ShrubberyCreationForm & operator=(ShrubberyCreationForm &obj);
        ~ShrubberyCreationForm();
};

#endif