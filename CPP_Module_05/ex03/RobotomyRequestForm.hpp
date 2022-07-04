/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:26:09 by murachid          #+#    #+#             */
/*   Updated: 2022/02/18 12:45:40 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP
#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form
{
    private:
        const std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string & target);
        const std::string getTarget();
        virtual void execute(Bureaucrat const & executor);
        RobotomyRequestForm(RobotomyRequestForm &obj);
        RobotomyRequestForm & operator=(RobotomyRequestForm &obj);
        ~RobotomyRequestForm();
};

#endif