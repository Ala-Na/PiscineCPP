/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:10:01 by anadege           #+#    #+#             */
/*   Updated: 2021/12/07 18:30:43 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>
#include "MateriaSource.hpp"
#include "Materia.hpp"

///////////////////
// MATERIASOURCE // 
///////////////////

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    for (int i = 0; i < 4; i++)
    {
        if (src.getMateria(i) != NULL)
            this->materia[i] = src.getMateria(i)->clone();
        else
            this->materia[i] =NULL;
    }
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->getMateria(i) != NULL)
            delete this->materia[i];
    }
}

MateriaSource   &MateriaSource::operator=(MateriaSource const &other)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->getMateria(i) != NULL)
            delete this->materia[i];
        if (other.getMateria(i) != NULL)
            this->materia[i] = other.getMateria(i)->clone();
        else
            this->materia[i] = NULL;
    }
    return *this;
}

void    MateriaSource::learnMateria(AMateria *materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->getMateria(i) == NULL)
        {
            this->materia[i] = materia;
            std::cout << "New materia of type " << materia->getType() << " learned by Source" << std::endl;
            return ;
        }
    }
    std::cout << "Source is already full" <<std::endl;
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->getMateria(i) != NULL && this->getMateria(i)->getType() == type)
        {
            std::cout << "New materia of type " << type << " created by Source" << std::endl;
            return this->materia[i]->clone();
        }
    }
    std::cout << "Source don't possess a version of " << type << " materia and can't replicate it." <<std::endl;
    return NULL; // NULL = 0 (just more explicit)
}

AMateria    *MateriaSource::getMateria(int idx) const
{
    if (idx >= 0 && idx < 4)
    {
        if (this->materia[idx] == NULL)
            return NULL;
        return this->materia[idx];
    }
    return NULL;
}