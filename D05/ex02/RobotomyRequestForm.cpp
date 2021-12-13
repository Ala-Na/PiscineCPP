/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:21:35 by anadege           #+#    #+#             */
/*   Updated: 2021/12/13 12:32:01 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void) : Form("robotomy request", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form("robotomy request", 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm   &RobotomyRequestForm::operator=(RobotomyRequestForm const &other) 
{
    return *this;
}

void    RobotomyRequestForm::action(std::string &target)
{
    int success;

    std::cout << * Bziiii wiiiii * << std::endl;
    success = rand() % 1;
    if (succes == 0)
        std::cout << target << " was succesfully robotomized" << std::endl;
    else
        std::cout << target << " robotomy failed" << std::endl;
}