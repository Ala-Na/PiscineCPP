/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 18:21:34 by anadege           #+#    #+#             */
/*   Updated: 2021/12/12 18:21:34 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <stdexcept>
#include <iostream>

Bureaucrat::Bureaucrat(void) : name("John Doe"), grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    if (this->grade < 1)
        throw GradeTooHighException();
    else if (this->grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.getName()), grade(src.getGrade()) {}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat  &Bureaucrat::operator=(Bureaucrat const &other)
{
    this->grade = other.getGrade();
    return *this;
}

std::string const   &Bureaucrat::getName(void) const
{
    return this->name;
}

int const   &Bureaucrat::getGrade(void) const
{
    return this->grade;
}

void    Bureaucrat::incrementGrade(void)
{
    if (this->grade - 1 < 1)
        throw GradeTooHighException();
    else
        this->grade = this->grade - 1;
}

void    Bureaucrat::decrementGrade(void)
{
    if (this->grade + 1 > 150)
        throw GradeTooLowException();
    else
        this->grade = this->grade + 1;
}

const char  *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return "Bureaucrat : Grade Too High !";
}

const char  *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return "Bureaucrat : Grade Too Low !";
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &bureaucrat)
{
    o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return o;
}