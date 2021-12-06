/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:26:40 by anadege           #+#    #+#             */
/*   Updated: 2021/12/06 09:50:41 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Brain.hpp"
#include "Animal.hpp"

int main()
{
    std::cout << "------- ABSTRACT BASIC TESTS -------" << std::endl;
    
    std::cout << "\n--- ANIMAL CREATION ---\n" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    // UNCOMMENT FOlLOWING TO SEE COMPILATION ERROR 
    //const Animal *k = new Animal();

    std::cout << "\n--- ANIMALS SOUNDS ---\n" << std::endl;
    j->makeSound();
    i->makeSound();

    std::cout << "\n---ANIMAL DELETION ---\n" << std::endl;
    delete j;//should not create a leak
    delete i;

   std::cout << "\n------- ARRAY TESTS ------\n" << std::endl;

    std::cout << "--- ANIMAL CREATION ---\n" << std::endl;
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
        array[i]->makeSound();
    
    std::cout << "\n--- ANIMAL DELETION ---\n" << std::endl;
    for (int i = 0; i < 4; i++)
        delete array[i];
    
    // UNCOMMENT FOLLOWING TO RETRY PREVIOUS TESTS
    // std::cout << "\n------ DEEPCOPY TESTS ------\n" << std::endl;
    
    // std::cout << "--- ANIMAL CREATION ---\n" << std::endl;
    // Cat *cat = new Cat();
    // Cat *cpy = new Cat();
    // cat->getBrain()->setIdeas("sleep");
    // *cpy = *cat;

    // std::cout << "\n--- PRINT IDEAS ---\n" << std::endl;
    // std::cout << "Original cat ideas :";
    // for (int ind = 0; ind < 100; ind++)
    //     std::cout << cat->getBrain()->getOneIdea(ind) << " ";
    // std::cout << "\n\n" << "Copy cat ideas :";
    // for (int ind = 0; ind < 100; ind++)
    //     std::cout << cpy->getBrain()->getOneIdea(ind) << " ";
    // std::cout << std::endl;

    // std::cout << "\n--- MODIFICATION IDEAS OF ORIGINAL ---\n" << std::endl;
    // cat->getBrain()->setIdeas("food");
    
    // std::cout << "\n--- PRINT IDEAS ---\n" << std::endl;
    // std::cout << "Original cat ideas :";
    // for (int ind = 0; ind < 100; ind++)
    //     std::cout << cat->getBrain()->getOneIdea(ind) << " ";
    // std::cout << "\n\n" << "Copy cat ideas :";
    // for (int ind = 0; ind < 100; ind++)
    //     std::cout << cpy->getBrain()->getOneIdea(ind) << " ";
    // std::cout << std::endl;

    // std::cout << "\n--- ANIMAL DELETION ---\n" << std::endl;
    // delete cat;
    // delete cpy;

    return 0;
}