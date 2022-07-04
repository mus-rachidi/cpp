/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:26:05 by murachid          #+#    #+#             */
/*   Updated: 2022/02/18 12:45:34 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        const std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string & target);
        const std::string getTarget();
        virtual void execute(Bureaucrat const & executor);
        PresidentialPardonForm(PresidentialPardonForm &obj);
        PresidentialPardonForm & operator=(PresidentialPardonForm &obj);
        ~PresidentialPardonForm();
};




#endif