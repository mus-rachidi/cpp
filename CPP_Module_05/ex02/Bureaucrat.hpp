/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:52:41 by murachid          #+#    #+#             */
/*   Updated: 2022/02/20 13:15:12 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string   name;
        int                 grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string str, int grade);
        Bureaucrat(Bureaucrat const &old_obj);
        Bureaucrat & operator = (const Bureaucrat &obj);
        void        signForm(Form &obj);
        int         getGrade() const;
        void        Increment();
        void        Decrement();
        std::string getName() const;
        void        check_exception() const;
        void        executeForm(Form const & form) ;

        class GradeTooHighException : public std::exception
        {
            public:
		        virtual const char* what() const throw()
                {
                    return "my high exception happend !!!";
                }
        };
	    class GradeTooLowException : public std::exception
        {
            public:
		        virtual const char* what() const throw()
                {
                    return "my low exception happend !!!";
                }
	    };
        ~Bureaucrat();
};

std::ostream & operator<<(std::ostream &output, const Bureaucrat &old);

#endif