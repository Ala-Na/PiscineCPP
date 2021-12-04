/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:26:40 by anadege           #+#    #+#             */
/*   Updated: 2021/12/04 23:14:40 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Brain.hpp"
#include "Animal.hpp"

int main()
{
    std::cout << "------- BASIC TESTS -------" << std::endl;
    
    std::cout << "\n--- ANIMAL CREATION ---\n" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\n--- ANIMALS SOUNDS ---\n" << std::endl;
    j->makeSound();
    i->makeSound();

    std::cout << "\n---ANIMAL DELETION ---\n" << std::endl;
    delete j;//should not create a leak
    delete i;


    std::cout << "\n--- MORE TESTS ---\n" << std::endl;

    std::cout << "--- ANIMAL CREATION ---" << std::endl;
    const Animal* array[4];
    for (int i = 0; i < 4; i++)
    {
        if (i < 2)
            array[i] = new Cat();
        else
            array[i] = new Dog();
    }

    std::cout << "\n--- ANIMALS SOUNDS ---\n" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        array[i]->makeSound();
        array[i]->getBrain()->showIdeas();
    }
    
    std::cout << "\n---ANIMAL DELETION ---\n" << std::endl;
    for (int i = 0; i < 4; i++)
        delete array[i];
    
    
//     std::cout << "\n--- PRINT IDEAS ---\n" << std::endl;
//     std::cout << "Dog ideas :";
//     for (int ind = 0; ind < 100; ind++)
//         std::cout << j->Dog::getBrain()->getIdea(ind);
//     std::cout << "Cat ideas :";
//     for (int ind = 0; ind < 100; ind++)
//         std::cout << i->Cat::getBrain()->getIdea(ind);
//     std::cout << std::endl;
}