/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:35:20 by anadege           #+#    #+#             */
/*   Updated: 2021/12/06 14:33:33 by anadege          ###   ########.fr       */
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
    this->type = other.getType();
    return *this;
}

std::string const   &AMateria::getType(void) const
{
    return this->type;
}

AMateria *AMateria::clone(void) const
{
    AMateria *clone = new AMateria(this->getType());
    return clone;
}

void    AMateria::use(ICharacter &target)
{
    std::cout << "* use " << this->getType() << " on " << target.getName() << " *" << std::endl;
}

/////////
// ICE //
/////////

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(Ice const &src) : AMateria("ice") {}

Ice::~Ice(void) {}

void    Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

//////////
// CURE //
//////////

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(Ice const &src) : AMateria("cure") {}

Cure::~Cure(void) {}

void    Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}