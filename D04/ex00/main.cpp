/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:25:30 by anadege           #+#    #+#             */
/*   Updated: 2021/12/04 21:31:07 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

int main()
{
    std::cout << "--- ANIMALS CREATIONS ---\n" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\n--- ANIMALS TYPES ---\n" << std::endl;
    std::cout << meta->getType() << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    std::cout << "\n--- ANIMALS SOUNDS ---\n" << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << "\n--- WRONG ANIMALS CREATIONS ---\n" << std::endl;
    const WrongAnimal* metabis = new WrongAnimal();
    const WrongAnimal* jbis = new WrongDog();
    const WrongAnimal* ibis = new WrongCat();

    std::cout << "\n--- WRONG ANIMALS TYPES ---\n" << std::endl;
    std::cout << metabis->getType() << std::endl;
    std::cout << jbis->getType() << " " << std::endl;
    std::cout << ibis->getType() << " " << std::endl;

    std::cout << "\n--- WRONG ANIMALS SOUNDS ---\n" << std::endl;
    ibis->makeSound(); //will output the WrongAnimal sound!
    jbis->makeSound();
    metabis->makeSound();
}