/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:40:13 by anadege           #+#    #+#             */
/*   Updated: 2021/12/04 21:29:58 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

/////////////////
// WRONGANIMAL //
/////////////////

WrongAnimal::WrongAnimal(void)
{
    this->type = "WrongMammal";
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    *this = src;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(WrongAnimal const &other)
{
    this->type = other.getType();
    return *this;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}

void  WrongAnimal::makeSound(void) const
{
    std::cout << "No sound is made by animal of type " << this->getType() << std::endl;
}

//////////////
// WRONGDOG //
//////////////

WrongDog::WrongDog(void) : WrongAnimal()
{
    this->type = "WrongDog";
    std::cout << "WrongDog default constructor called" << std::endl;
}

WrongDog::WrongDog(WrongDog const &src) : WrongAnimal()
{
    *this = src;
    std::cout << "WrongDog copy constructor called" << std::endl;
}

WrongDog::~WrongDog(void)
{
    std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog &WrongDog::operator=(WrongDog const &other)
{
    this->type = other.getType();
    return *this;
}

void    WrongDog::makeSound(void) const
{
    std::cout << "Wouf wouf !!! **Is the postman nearby ?**" << std::endl;
}

//////////////
// WRONGCAT //
//////////////

WrongCat::WrongCat(void) : WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal()
{
    *this = src;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &other)
{
    this->type = other.getType();
    return *this;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Pssshiiiiif !!! **Go away human !**" << std::endl;
}