/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 18:06:38 by anadege           #+#    #+#             */
/*   Updated: 2021/12/12 18:06:38 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <string>
#include <stdexcept>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    public:
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const &src);
        virtual ~Bureaucrat(void);

        Bureaucrat  &operator=(Bureaucrat const &other);

        std::string const   &getName(void) const;
        int const           &getGrade(void) const;
        void                incrementGrade(void);
        void                decrementGrade(void);

        void    signForm(Form &form);
        void    executeForm(Form const &form);

        class   GradeTooHighException : public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };
        class   GradeTooLowException : public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };

    private:
        std::string const   name;
        int                 grade;
        
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &bureaucrat);

#endif