/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:33:37 by anadege           #+#    #+#             */
/*   Updated: 2021/12/07 18:25:59 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Character.hpp"
#include "Materia.hpp"
#include "MateriaSource.hpp"

int main()
{
    std::cout << "\n--- TESTS FOR MATERIA SOURCE AND MATERIA ---\n" << std::endl;
    
    std::cout << "--- Creation of source and check methods ---\n" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    //src->learnMateria(new AMateria("machin")); // Uncomment to check that AMateria is an abstract class
    AMateria *i = src->createMateria("ice");
    AMateria *j = src->createMateria("cure");
    *i = *j;
    src->createMateria("truc");

    std::cout << "\n--- Creation of copy via copy constructor or = operator (while adding new values to one of them to check if deep) ---\n" << std::endl;
    
    MateriaSource *cpy = new MateriaSource(*((MateriaSource *)src));
    MateriaSource *cpy_cpy = new MateriaSource();
    *cpy_cpy = *cpy;
    AMateria *ice_1 = new Ice(*((Ice *)i));
    AMateria *ice_2 = new Ice();
    AMateria *ice_3 = new Ice();
    cpy->learnMateria(ice_1);
    cpy->learnMateria(ice_2);
    cpy->learnMateria(ice_3);
    for (int i = 0; i < 4; i++)
    {
        if (cpy_cpy->getMateria(i) != NULL)
            std::cout << "Materia at " << i << " emplacement in source cpy_cpy: " << cpy_cpy->getMateria(i)->getType() << std::endl;
        else
            std::cout << "No materia at emplacement " << i << " in source cpy_cpy" << std::endl;
    }
    for (int i = 0; i < 4; i++)
    {
        if (cpy->getMateria(i) != NULL)
            std::cout << "Materia at " << i << " emplacement in source cpy: " << cpy->getMateria(i)->getType() << std::endl;
        else
            std::cout << "No materia at emplacement " << i << " in source cpy" << std::endl;
    }

    
    std::cout << "\n--- TESTS FOR CHARACTERS ---\n" << std::endl;

    std::cout << "\n--- Characters creations and equipements --\n" << std::endl;
    ICharacter* me = new Character("me");
    AMateria* tmp;
    AMateria* tmp_0;
    tmp_0 = src->createMateria("ice");
    me->equip(tmp_0);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    Character* me_cpy = new Character(*(Character *)me);
    Character* jdoe = new Character();
    tmp = src->createMateria("cure");
    jdoe->equip(tmp);
    tmp = src->createMateria("cure");
    jdoe->equip(tmp);
    jdoe->unequip(1);
    delete tmp;
    
    std::cout << "\n--- Display of previous action ---\n" << std::endl;
    
    std::cout << "Character " << me->getName() << " created" << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    std::cout << std::endl;
    std::cout << "Character " << me_cpy->getName() << "(cpy) created" << std::endl;
    me_cpy->use(0, *bob);
    me_cpy->use(1, *bob);
    me_cpy->use(2, *bob);
    std::cout << std::endl;
    std::cout << "Character " << jdoe->getName() << " created" << std::endl;    
    jdoe->use(0, *bob);
    jdoe->use(1, *bob);
    jdoe->use(2, *bob);

    std::cout << "\n--- After jdoe is set to me_cpy (check of deep copy) and some unequip test in me---\n" << std::endl;
    
    *jdoe = *me_cpy;
    me->unequip(0);
    me->unequip(2);
    std::cout << std::endl;

    std::cout << "Character " << me->getName() << " present" << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    std::cout << std::endl;
    std::cout << "Character " << me_cpy->getName() << "(cpy) present" << std::endl;
    me_cpy->use(0, *bob);
    me_cpy->use(1, *bob);
    me_cpy->use(2, *bob);
    std::cout << std::endl;
    std::cout << "Character " << jdoe->getName() << " present" << std::endl;    
    jdoe->use(0, *bob);
    jdoe->use(1, *bob);
    jdoe->use(2, *bob);   
    
    std::cout << "\n--- Memory liberation ---\n" << std::endl;
    
    delete bob;
    delete me;
    delete src;
    delete cpy;
    delete i;
    delete j;
    delete ice_3;
    delete cpy_cpy;
    delete jdoe;
    delete me_cpy;
    delete tmp_0;
    
    return 0;
}