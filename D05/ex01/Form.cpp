/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 22:42:47 by anadege           #+#    #+#             */
/*   Updated: 2021/12/12 22:42:47 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name("random form"), isSigned(false), signGrade(150), execGrade(150) {}

Form::Form(std::string name, int signGrade, int execGrade) : name(name), isSigned(false), signGrade(signGrade), execGrade(execGrade)
{
    if (this->signGrade < 1 || this->execGrade < 1)
        throw GradeTooHighException();
    else if (this->signGrade > 150 || this->execGrade > 150)
        throw GradeTooLowException();
}

Form::Form(Form const &src) : name(src.getName()), isSigned(false), signGrade(src.getSignGrade()), execGrade(src.getExecGrade()) {}

Form::~Form(void) {}

Form    &Form::operator=(Form const &other)
{
    if (this != &other)
    {
        this->isSigned = other.getState();
        *const_cast<std::string *>(&this->name) = other.getName();
        *const_cast<int *>(&this->signGrade) = other.getSignGrade();
        *const_cast<int *>(&this->execGrade) = other.getExecGrade();
    }
    return *this;
}

std::string const   &Form::getName(void) const
{
    return this->name;
}

int const   &Form::getSignGrade(void) const
{
    return this->signGrade;
}

int const   &Form::getExecGrade(void) const
{
    return this->execGrade;
}

bool const  &Form::getState(void) const
{
    return this->isSigned;
}

void    Form::beSigned(Bureaucrat const &bureaucrat)
{
    if (bureaucrat.getGrade() > this->getSignGrade())
        throw GradeTooLowException();
    this->isSigned = true;
}

const char  *Form::GradeTooHighException::what(void) const throw()
{
    return "Form : Grade Too High !";
}

const char  *Form::GradeTooLowException::what(void) const throw()
{
    return "Form : Grade Too Low !";
}

std::ostream &operator<<(std::ostream &o, Form const &form)
{
    o << form.getName() << " form, signing grade required: " << form.getSignGrade() << ", executing grade required: " << form.getExecGrade();
    return o;
}