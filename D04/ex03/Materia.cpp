/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:35:20 by anadege           #+#    #+#             */
/*   Updated: 2021/12/07 13:44:00 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Materia.hpp"
#include "Character.hpp"

////////////////////
// AMATERIA CLASS //
////////////////////

AMateria::AMateria(void)
{
    this->type = "";
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
}

AMateria::AMateria(AMateria const &src)
{
    *this = src;
}

AMateria::~AMateria(void) {}

AMateria &AMateria::operator=(AMateria const &other)
{
    if (this->type != other.getType())
        std::cout << "Can't assign materia to materia of different type." << std::endl;
    return *this;
}

std::string const   &AMateria::getType(void) const
{
    return this->type;
}

void    AMateria::use(ICharacter &target)
{
    std::cout << "* use " << this->getType() << " on " << target.getName() << " *" << std::endl;
}

/////////
// ICE //
/////////

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(Ice const &src) : AMateria("ice")
{
    this->type = src.getType();
}

Ice::~Ice(void) {}

Ice &Ice::operator=(Ice const &other)
{
    this->type = other.getType();
    return *this;
}

void    Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice *Ice::clone(void) const
{
    Ice *clone = new Ice();
    return clone;
}

//////////
// CURE //
//////////

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(Cure const &src) : AMateria("cure") 
{
    this->type = src.getType();
}

Cure::~Cure(void) {}

Cure &Cure::operator=(Cure const &other)
{
    this->type = other.getType();
    return *this;
}

void    Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure *Cure::clone(void) const
{
    Cure *clone = new Cure();
    return clone;
}
