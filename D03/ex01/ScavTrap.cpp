/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:20:34 by anadege           #+#    #+#             */
/*   Updated: 2021/11/30 20:20:34 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap")
{
    std::cout << "ScavTrap default constructor called (name initialized at ScavTrap)" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    this->name = src.getName();
    this->hitPoints = src.getHitPoints();
    this->energyPoints = src.getEnergyPoints();
    this->attackDamage = src.getAttackDamage();
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap  &ScavTrap::operator=(ScavTrap const &other)
{
    this->name = other.getName();
    this->hitPoints = other.getHitPoints();
    this->energyPoints = other.getEnergyPoints();
    this->attackDamage = other.getAttackDamage();
    return *this;
}

void    ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << this->getName();
    std::cout << " attack " << target;
    std::cout << ", causing " << this->getAttackDamage();
    std::cout << " points of damage !" << std::endl;
}

void    ScavTrap::guardGate(void)
{
    std::cout << this->name << " is now in Gate Keeper's mode." << std::endl;
}