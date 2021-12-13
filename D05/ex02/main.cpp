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
#include <unistd.h>
#include <iostream>
#include <string>
#include <stdexcept>
#include <cstdlib>
#include <time.h>

int main()
{
    Bureaucrat jdoe;
    std::cout << jdoe << std::endl;
    Bureaucrat georges("Georges Mickael", 5);
    std::cout << georges << std::endl;
    Form *ptr;

    std::cout << "\n--- Form number 1 ---\n" << std::endl;

    ptr = new PresidentialPardonForm();
    std::cout << *ptr << std::endl;
    jdoe.signForm(*ptr);
    jdoe.executeForm(*ptr);
    delete ptr;


    std::cout << "\n--- Form number 2 ---\n" << std::endl;
    ptr = new PresidentialPardonForm();
    std::cout << *ptr << std::endl;
    georges.signForm(*ptr);
    jdoe.executeForm(*ptr);
    delete ptr;

    std::cout << "\n--- Form number 3 ---\n" << std::endl;
    ptr = new PresidentialPardonForm();
    std::cout << *ptr << std::endl;
    georges.signForm(*ptr);
    georges.executeForm(*ptr);
    delete ptr;

    std::cout << "\n--- Form number 4 ---\n" << std::endl;
    ptr = new RobotomyRequestForm();
    std::cout << *ptr << std::endl;
    jdoe.signForm(*ptr);
    jdoe.executeForm(*ptr);
    delete ptr;

    std::cout << "\n--- Form number 5 ---\n" << std::endl;
    ptr = new RobotomyRequestForm();
    std::cout << *ptr << std::endl;
    georges.signForm(*ptr);
    jdoe.executeForm(*ptr);
    delete ptr;

    std::cout << "\n--- Form number 6 ---\n" << std::endl;
    ptr = new RobotomyRequestForm();
    std::cout << *ptr << std::endl;
    srand((unsigned)time(NULL));
    georges.signForm(*ptr);
    georges.executeForm(*ptr);
    georges.executeForm(*ptr);
    georges.executeForm(*ptr);
    georges.executeForm(*ptr);
    delete ptr;

    std::cout << "\n--- Form number 7 ---\n" << std::endl;
    ptr = new ShrubberyCreationForm();
    std::cout << *ptr << std::endl;
    jdoe.signForm(*ptr);
    jdoe.executeForm(*ptr);
    delete ptr;

    std::cout << "\n--- Form number 8 ---\n" << std::endl;
    ptr = new ShrubberyCreationForm();
    std::cout << *ptr << std::endl;
    georges.signForm(*ptr);
    jdoe.executeForm(*ptr);
    delete ptr;


    std::cout << "\n--- Form number 9 ---\n" << std::endl;
    ptr = new ShrubberyCreationForm();
    std::cout << *ptr << std::endl;
    georges.signForm(*ptr);
    georges.executeForm(*ptr);
    delete ptr;

}