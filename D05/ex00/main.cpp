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

    std::cout << "\n--- D00: Someone did a bad job today ---\n" << std::endl;
    try {
        std::cout << "Georges is loosing grade" << std::endl;
        georges.decrementGrade();
        std::cout << georges << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::cout << "John is loosing grade" << std::endl;
        jdoe.decrementGrade();
        std::cout << jdoe << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\nEnd of the day :" << std::endl;
    std::cout << jdoe << std::endl;
    std::cout << georges << std::endl;

    std::cout << "\n--- D01: The boss is in a good mood today ---\n" << std::endl;
    try {
        std::cout << "Georges is winning many grades" << std::endl;
        georges.incrementGrade();
        georges.incrementGrade();
        georges.incrementGrade();
        georges.incrementGrade();
        georges.incrementGrade();
        georges.incrementGrade();
        std::cout << georges << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::cout << "John is winning grade" << std::endl;
        jdoe.incrementGrade();
        std::cout << jdoe << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\nEnd of the day :" << std::endl;
    std::cout << jdoe << std::endl;
    std::cout << georges << std::endl;

    std::cout << "\n--- D02: A parachutee is coming ---\n" << std::endl;
    try {
        std::cout << "Parachutee is made with level 0" << std::endl;
        Bureaucrat son("Golden Son", 0);
        std::cout << son << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\nEnd of the day :" << std::endl;
    std::cout << jdoe << std::endl;
    std::cout << georges << std::endl;
    std::cout << "Parachutee didn't last long" << std::endl;
    //std::cout << son << std::endl;

    std::cout << "\n--- D03: Georges is sick, John is covering for him (may the boss not notice) ---\n" << std::endl;
    try {
        jdoe = georges;
        std::cout << jdoe << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\nEnd of the day :" << std::endl;
    std::cout << jdoe << std::endl;
    std::cout << georges << std::endl;

    std::cout << "\n--- D04: To reduce cost, an intern is hired (but not payed) ---\n" << std::endl;
    try {
        std::cout << "Intern is made with level 200" << std::endl;
        Bureaucrat intern("Go make copies", 200);
        std::cout << intern << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\nEnd of the day :" << std::endl;
    std::cout << jdoe << std::endl;
    std::cout << georges << std::endl;
    std::cout << "Intern didn't last long" << std::endl;

    std::cout << "\n--- D05: To reduce cost, Georges is cloned ---\n" << std::endl;
    
    std::cout << "Clone of georges is made" << std::endl;
    Bureaucrat clone(georges);
    std::cout << clone << std::endl;

    std::cout << "\nEnd of the day :" << std::endl;
    std::cout << jdoe << std::endl;
    std::cout << georges << std::endl;
    std::cout << clone << " (clone, or is it ?)" << std::endl;
}