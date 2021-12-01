/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:58:58 by anadege           #+#    #+#             */
/*   Updated: 2021/11/30 16:58:58 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("ClapTrap"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap default constructor called (name initialized at ClapTrap)" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    this->name = src.getName();
    this->hitPoints = src.getHitPoints();
    this->energyPoints = src.getEnergyPoints();
    this->attackDamage = src.getAttackDamage();
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

std::string ClapTrap::getName(void) const
{
    return this->name;
}

unsigned int ClapTrap::getHitPoints(void) const
{
    return this->hitPoints;
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
    return this->energyPoints;
}

unsigned int ClapTrap::getAttackDamage(void) const
{
    return this->attackDamage;
}

void    ClapTrap::setHitPoints(unsigned int new_HP)
{
    this->hitPoints = new_HP;
}

ClapTrap  &ClapTrap::operator=(ClapTrap const &other)
{
    this->name = other.getName();
    this->hitPoints = other.getHitPoints();
    this->energyPoints = other.getEnergyPoints();
    this->attackDamage = other.getAttackDamage();
    return *this;
}

void    ClapTrap::attack(std::string const &target)
{
    std::cout << this->getName();
    std::cout << " attack " << target;
    std::cout << ", causing " << this->getAttackDamage();
    std::cout << " points of damage !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    int damage = (int)this->getHitPoints() - (int)amount;
    if (damage < 0)
        damage = 0;
    std::cout << this->getName();
    std::cout << " take " << amount << " damage !" << std::endl;
    this->setHitPoints(damage);
    std::cout << "Hit points left: ";
    std::cout << this->getHitPoints() << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << this->name;
    std::cout << " is repaired for " << amount << " hit points !" << std::endl;
    this->setHitPoints(this->hitPoints + amount);
    std::cout << "Hit points left: ";
    std::cout << this->getHitPoints() << std::endl;
}