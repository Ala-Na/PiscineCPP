/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:21:35 by anadege           #+#    #+#             */
/*   Updated: 2021/12/13 15:21:00 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void) : Form("robotomy request", 72, 45) 
{
    this->target = "random_target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string &target) : Form("robotomy request", 72, 45) 
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form("robotomy request", 72, 45) 
{
    this->target = src.getTarget();
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm   &RobotomyRequestForm::operator=(RobotomyRequestForm const &other) 
{
    this->target = other.getTarget();
    return *this;
}

std::string const   &RobotomyRequestForm::getTarget(void) const
{
    return this->target;
}

void    RobotomyRequestForm::action(std::string &target) const
{
    int success;

    std::cout << "* Bziiii wiiiii *" << std::endl;
    success = rand() % 2;
    if (success == 0)
        std::cout << target << " was succesfully robotomized" << std::endl;
    else
        std::cout << target << " robotomy failed" << std::endl;
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{         
    std::string target;
    
    try
    {
        if (this->getState() == false)
            throw UnsignedFormException();
        if (executor.getGrade() > this->getExecGrade())
            throw GradeTooLowException();
        std::cout << executor.getName() << " executs " <<  *this << std::endl;
        target = this->target;
        this->action(target);    
    }
    catch(const std::exception &e)
    {
        std::cerr << executor.getName() << " cannot execute form because " << e.what() << std::endl;
    }
}