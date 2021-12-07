/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:02:08 by anadege           #+#    #+#             */
/*   Updated: 2021/12/07 15:39:34 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Character.hpp"
#include "MateriaSource.hpp"

Character::Character(void) : name("J. Doe")
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
    {
        if (this->accessMateria(i))
            delete materia[i];
    }
}

Character   &Character::operator=(Character const &other)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->accessMateria(i) != NULL)
            delete this->materia[i];
        if (other.accessMateria(i) != NULL)
            this->materia[i] = other.accessMateria(i)->clone();
        else
            this->materia[i] = NULL;
    }
    return *this;
    
}

AMateria    *Character::accessMateria(int idx) const
{
    if (idx >= 0 && idx < 4 && this->materia[idx] != NULL)
        return this->materia[idx];
    return NULL;
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
    if (this->materia[idx])
    {
        delete this->materia[idx];
        this->materia[idx] = NULL;
        std::cout << "A materia was retrieve from " << this->name << "'s inventory" << std::endl;
    }
    else
        std::cout << "No materia present at this slot" << std::endl;
}

void    Character::use(int idx, ICharacter  &target)
{
    this->materia[idx]->use(target);
}
