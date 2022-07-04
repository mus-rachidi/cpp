/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:57:11 by murachid          #+#    #+#             */
/*   Updated: 2022/02/16 18:17:22 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private :
        const std::string   name;
        const int           grade_to_signe;
        const int           garde_to_excute;
        bool                is_signed;
    public :
        void        check_exception() const;
        void        beSigned(Bureaucrat const & obj) ;
        Form(std::string str, const int grade_to_signe , const int garde_to_excute);
        Form();
        Form(Form const & a);
        Form & operator = (Form const & a);
        class GradeTooHighException : public std::exception
        {
            public:
		        virtual const char* what() const throw()
                {
                    return "my high exception happend !!!";
                }
        };
        class GradeTooLowException1 : public std::exception 
        {
            public:
		        virtual const char* what() const throw()
                {
                    return "this Form signed !!!";
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
        bool get_signed();
        int grade_signe();
        std::string    get_name();
        ~Form();
};

#endif