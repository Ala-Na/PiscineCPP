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
#include <iostream>
#include <string>
#include <stdexcept>

int main()
{


    std::cout << "\n--- Form number 1 ---\n" << std::endl;
    try {
        ptr = new PresidentialPardonForm();
        std::cout << *ptr << std::endl;
        jdoe.signForm(*ptr);
        ptr->execute(jdoe);
        delete ptr;
    }
    catch (std::exception &e) {
        delete ptr;
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n--- Form number 2 ---\n" << std::endl;
    try {
        ptr = new PresidentialPardonForm();
        std::cout << *ptr << std::endl;
        georges.signForm(*ptr);
        ptr->execute(jdoe);
        delete ptr;
    }
    catch (std::exception &e) {
        delete ptr;
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n--- Form number 3 ---\n" << std::endl;
    try {
        ptr = new PresidentialPardonForm();
        std::cout << *ptr << std::endl;
        georges.signForm(*ptr);
        ptr->execute(georges);
        delete ptr;
    }
    catch (std::exception &e) {
        delete ptr;
        std::cerr << e.what() << std::endl;
    }


}