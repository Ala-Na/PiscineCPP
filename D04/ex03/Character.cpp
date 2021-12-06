/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:02:08 by anadege           #+#    #+#             */
/*   Updated: 2021/12/06 14:40:00 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Character.hpp"
#include "MateriaSource.hpp"

Character::Character(void) : name("John Doe")
{
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

Character::Character(std::string name) : name(name)
{
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

Character::Character(Character const &src) : name(src.getName())
{
    for (int i = 0; i < 4; i++)
    {
        if (src.materia[i])
            this->materia[i] = src.accessMateria(i)->clone();
        else
            this->materia[i] = NULL;
    }
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
        delete materia[i];
}

Character   &Character::operator=(Character const &other)
{
    this->name = (std::string)other.getName();
    for (int i = 0; i < 4; i++)
    {
        if (this->accessMateria(i))
            delete this->materia[i];
        if (other.accessMateria(i))
            this->materia[i] = other.accessMateria(i)->clone();
        else
            this->materia[i] = NULL;
    }
    return *this;
    
}

AMateria    *Character::accessMateria(int idx) const
{
    return this->materia[idx];
}

std::string const   &Character::getName(void) const
{
    return this->name;
}

void    Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->materia[i])
        {
            this->materia[i] = m;
            std::cout << "New materia added to " << this->name << "'s inventory" << std::endl;
            return ;
        }
            
    }
    std::cout << "Inventory is already full" << std::endl;
}

void    Character::unequip(int idx)
{
    delete this->materia[i];
    this->materia[i] = NULL;
    std::cout << "A materia was retriev from " << this->name << "'s inventory" << std::endl;
}

void    Character::use(int idx, ICharacter  &target)
{
    this->materia[i]->use();
}
