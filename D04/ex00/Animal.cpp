/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:40:13 by anadege           #+#    #+#             */
/*   Updated: 2021/12/04 21:23:23 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"

////////////
// ANIMAL //
////////////

Animal::Animal(void)
{
    this->type = "Mammal";
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
    *this = src;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal  &Animal::operator=(Animal const &other)
{
    this->type = other.getType();
    return *this;
}

std::string Animal::getType(void) const
{
    return this->type;
}

void  Animal::makeSound(void) const
{
    std::cout << "No sound is made by animal of type " << this->getType() << std::endl;
}

/////////
// DOG //
/////////

Dog::Dog(void) : Animal()
{
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &src) : Animal()
{
    *this = src;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &other)
{
    this->type = other.getType();
    return *this;
}

void    Dog::makeSound(void) const
{
    std::cout << "Wouf wouf !!! **Is the postman nearby ?**" << std::endl;
}

/////////
// CAT //
/////////

Cat::Cat(void) : Animal()
{
    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &src) : Animal()
{
    *this = src;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &other)
{
    this->type = other.getType();
    return *this;
}

void    Cat::makeSound(void) const
{
    std::cout << "Pssshiiiiif !!! **Go away human !**" << std::endl;
}