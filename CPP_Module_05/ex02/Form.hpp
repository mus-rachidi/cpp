/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:57:11 by murachid          #+#    #+#             */
/*   Updated: 2022/02/20 14:44:00 by murachid         ###   ########.fr       */
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
        virtual void    execute(Bureaucrat const & executor) = 0;
        void            check_exception_excution( Bureaucrat const & ob) const ;
        void            check_exception() const;
        void            beSigned(Bureaucrat const & obj) ;
        void            set_signed(bool is_signed);
        Form(std::string str, const int grade_to_signe , const int garde_to_excute);
        Form();
        Form(Form const & a);
        Form & operator = (Form const & a);        
        bool get_signed();
        int grade_signe();
        int get_garde_to_excute() const;
        std::string    get_name() const;

        class GradeTooHighException : public std::exception
        {
            public:
		        virtual const char* what() const throw()
                {
                    return "exception happend : The grade you set is too high !!!";
                }
        };
        class SigneException : public std::exception 
        {
            public:
		        virtual const char* what() const throw()
                {
                    return "exception happend : The form cannot be sign, either because it wasn't sign"
					"ed, or because the Bureaucrat has a rank too low";
                }
	    };
	    class GradeTooLowException : public std::exception 
        {
            public:
		        virtual const char* what() const throw()
                {
                    return "exception happend : The grade you set is too low !!!";
                }
	    };
        class ExecutionException : public std::exception 
        {
            public:
		        virtual const char* what() const throw()
                {
                    return "exception happend : The form cannot be executed, either because it wasn't executed"
					"ed, or because the executor has a rank too low";
                }
	    };

        virtual ~Form();
};

#endif