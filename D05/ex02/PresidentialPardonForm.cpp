/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:52:16 by anadege           #+#    #+#             */
/*   Updated: 2021/12/13 17:52:01 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("presidential pardon", 25, 5) 
{
    this->target = "random_target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string &target) : Form("presidential pardon", 25, 5) 
{
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form("presidential pardon", 25, 5) 
{
    this->target = src.getTarget();
    (void)src;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm   &PresidentialPardonForm::operator=(PresidentialPardonForm const &other) 
{
    this->target = other.getTarget();
    return *this;
}

std::string const   &PresidentialPardonForm::getTarget(void) const
{
    return this->target;
}

void    PresidentialPardonForm::action(std::string &target) const
{
    std::cout << target << " was forgiven by Zafod Beelblebrox" << std::endl;
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    std::string target;

    if (this->getState() == false)
        throw UnsignedFormException();
    if (executor.getGrade() > this->getExecGrade())
        throw GradeTooLowException();
    target = this->target;
    this->action(target);    
}