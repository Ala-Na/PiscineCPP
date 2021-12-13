/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:21:35 by anadege           #+#    #+#             */
/*   Updated: 2021/12/13 14:48:55 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void) : Form("robotomy request", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form("robotomy request", 72, 45) 
{
    (void)src;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm   &RobotomyRequestForm::operator=(RobotomyRequestForm const &other) 
{
    (void)other;
    return *this;
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
        target = executor.getName();
        std::cout << target << " executs " <<  *this << std::endl;
        this->action(target);    
    }
    catch(const std::exception &e)
    {
        std::cerr << executor << " cannot execute form because " << e.what() << std::endl;
    }
}