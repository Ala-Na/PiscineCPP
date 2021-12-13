/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:00:19 by anadege           #+#    #+#             */
/*   Updated: 2021/12/13 17:53:33 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("shrubbery creation", 145, 137) 
{
    this->target = "random_target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target) : Form("shrubbery creation", 145, 137) 
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form("shrubbery creation", 145, 137)
{
    this->target = src.getTarget();
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other) 
{
    this->target = other.getTarget();
    return *this;
}

std::string const   &ShrubberyCreationForm::getTarget(void) const
{
    return this->target;
}

void    ShrubberyCreationForm::action(std::string &target) const
{
        std::string filename;
        
        filename = target.append("_shrubbery");
        std::ofstream ofs(filename.c_str());
        if (!ofs.is_open())
            return;
        ofs << "  /\\\n /\\/\\\n/\\/\\/\\\n  ||\n";
        ofs.close();
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::string target;

    if (this->getState() == false)
        throw UnsignedFormException();
    if (executor.getGrade() > this->getExecGrade())
        throw GradeTooLowException();
    target = this->target;
    this->action(target); 
}