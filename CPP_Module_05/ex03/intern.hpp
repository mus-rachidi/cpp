/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:22:12 by murachid          #+#    #+#             */
/*   Updated: 2022/02/21 09:58:04 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_CPP
#define INTERN_CPP
#include "Form.hpp"
#include <algorithm>  
#include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    private:
        void debug(void);
        void info(void);
        void warning( void );
    public:
        Intern();
        Intern(Intern const & obj);
        Intern & operator=(Intern const & obj);
        Form *makeForm(const std::string &name ,const std::string &target)const;
        typedef struct	s_form
        {
            std::string	name;
            Form		*target;
        }				t_form;
        ~Intern();
};

#endif
