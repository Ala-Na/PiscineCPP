/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 22:42:44 by anadege           #+#    #+#             */
/*   Updated: 2021/12/12 22:42:44 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
#define __FORM_HPP__

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        Form(void);
        Form(std::string name, int signGrade, int execGrade);
        Form(Form const &src);
        virtual ~Form(void);

        Form &operator=(Form const &other);

        std::string const   &getName(void) const;
        int const           &getSignGrade(void) const;
        int const           &getExecGrade(void) const;
        bool const          &getState(void) const;

        void    beSigned(Bureaucrat const &bureaucrat);

        class   GradeTooHighException : public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };
        class   GradeTooLowException : public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };
        class   UnsignedForm : public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };

    private:
        std::string const   name;
        bool                isSigned;
        int const           signGrade;
        int const           execGrade;

};

std::ostream &operator<<(std::ostream &o, Form const &form);

#endif