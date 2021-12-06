/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:10:01 by anadege           #+#    #+#             */
/*   Updated: 2021/12/06 14:33:56 by anadege          ###   ########.fr       */
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
        this->materia[i] = src.getMateria(i);
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        delete this->materia[i];
}

MateriaSource   &MateriaSource::operator=(MateriaSource const &other)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->getMateria(i))
            delete this->materia[i];
        if (other.getMateria(i))
            this->materia[i] = other.getMateria(i)->clone();
        else
            this->materia[i] = NULL;
    }
}

void    MateriaSource::learnMateria(AMateria *materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->getMateria(i))
        {
            this->materia[i] = materia;
            std::cout << "New materia learned by Source" << std::endl;
            return ;
        }
    }
    std::cout << "Source is already full" <<std::endl;
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->getMateria(i))
        {
            this->materia[i] = new AMateria(type);
            std::cout << "New materia of type " << type << " learned by Source" << std::endl;
            return materia[i];
        }
    }
    std::cout << "Source is already full" <<std::endl;
    return NULL;    
}

AMateria const  &MateriaSource::getMateria(int idx) const
{
    if (idx >= 0 && idx < 4)
        return this->materia[idx];
    return NULL;
}