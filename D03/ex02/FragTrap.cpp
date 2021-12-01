/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:50:42 by anadege           #+#    #+#             */
/*   Updated: 2021/12/01 10:50:42 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("FragTrap")
{
    std::cout << "FragTrap default constructor called (name initialized at FragTrap)" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    this->name = src.getName();
    this->hitPoints = src.getHitPoints();
    this->energyPoints = src.getEnergyPoints();
    this->attackDamage = src.getAttackDamage();
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap  &FragTrap::operator=(FragTrap const &other)
{
    this->name = other.getName();
    this->hitPoints = other.getHitPoints();
    this->energyPoints = other.getEnergyPoints();
    this->attackDamage = other.getAttackDamage();
    return *this;
}

void    FragTrap::attack(std::string const &target)
{
    std::cout << "FragTrap " << this->getName();
    std::cout << " attack " << target;
    std::cout << ", causing " << this->getAttackDamage();
    std::cout << " points of damage !" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << this->name << " wants to give you an high five." << std::endl;
}