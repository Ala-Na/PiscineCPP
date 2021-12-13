/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:52:16 by anadege           #+#    #+#             */
/*   Updated: 2021/12/13 14:46:42 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("presidential pardon", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form("presidential pardon", 25, 5) 
{
    (void)src;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm   &PresidentialPardonForm::operator=(PresidentialPardonForm const &other) 
{
    (void)other;
    return *this;
}

void    PresidentialPardonForm::action(std::string &target) const
{
    std::cout << target << " was forgiven by Zafod Beelblebrox" << std::endl;
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
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