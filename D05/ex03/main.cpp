/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:58:25 by anadege           #+#    #+#             */
/*   Updated: 2021/12/12 21:58:25 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

int main()
{
    Bureaucrat bigboss("BigBoss", 1);
    Intern intern;
    Form *form;

    std::cout << "\n--- Form number 1 ---\n" << std::endl;
    try {
        form = intern.makeForm("exist pa", "victim");
        delete form;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n--- Form number 2 ---\n" << std::endl;
    try {
        form = intern.makeForm("presidential pardon", "SuperRichCriminal");
        bigboss.signForm(*form);
        bigboss.executeForm(*form);
        delete form;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

}