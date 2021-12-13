/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:00:19 by anadege           #+#    #+#             */
/*   Updated: 2021/12/13 12:25:30 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("shrubbery creation", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form("shrubbery creation", 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other) 
{
    return *this;
}

void    ShrubberyCreationForm::action(std::string &target)
{
        std::string filename;
        
        filename = target.append("_shrubbery");
        std::ofstream ofs (filename);
        if (!ofs.is_open())
            return;
        ofs << "  /\\\n /\\/\\\n/\\/\\/\\\n  ||\n";
        ofs.close();
}