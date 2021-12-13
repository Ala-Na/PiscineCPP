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
#include <iostream>
#include <string>
#include <stdexcept>

int main()
{
    Bureaucrat jdoe;
    std::cout << jdoe << std::endl;
    Bureaucrat georges("Georges Mickael", 5);
    std::cout << georges << std::endl;

    std::cout << "\n--- Form number 1 ---\n" << std::endl;
    try {
        Form form("Lunch menus approval", 0, 5);
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n--- Form number 2 ---\n" << std::endl;
    try {
        Form form("Lunch menus approval", 5, 205);
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }     

    Form form("lunch menus approval", 5, 100);
    std::cout << "\n--- Form number 3 ---\n" << std::endl;
    try {
        georges.signForm(form);
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    } 

    std::cout << "\n--- Form number 4 ---\n" << std::endl;
    try {
        jdoe.signForm(form);
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    } 

    std::cout << "\n--- Form number 5 ---\n" << std::endl;
    try {
        Form copy;
        std::cout << copy << std::endl;
        copy = form;
        std::cout << copy << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    } 

    std::cout << "\n--- Form number 6 ---\n" << std::endl;
    try {
        Form copy(form);
        std::cout << copy << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    } 
}