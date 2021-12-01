/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:40:10 by anadege           #+#    #+#             */
/*   Updated: 2021/12/01 11:40:10 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap default constructor called (name set at DiamondTrap)" << std::endl;
    this->ClapTrap::name = "DiamondTrap_clap_name";
    this->name = "DiamondTrap";
    this->hitPoints = FragTrap::getHitPoints();
    this->energyPoints = ScavTrap::getEnergyPoints();
    this->attackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "DiamonTrap constructor called" << std::endl;
    this->ClapTrap::name = name + "_clap_name";
    this->name = name;
    this->hitPoints = FragTrap::getHitPoints();
    this->energyPoints = ScavTrap::getEnergyPoints();
    this->attackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    this->ClapTrap::name = src.getDiamondName() + "_clap_name";
    this->name = src.getDiamondName();
    this->hitPoints = src.getHitPoints();
    this->energyPoints = src.getEnergyPoints();
    this->attackDamage = src.getAttackDamage();
}

DiamondTrap  &DiamondTrap::operator=(DiamondTrap const &other)
{
    this->ClapTrap::name = other.getName();
    this->name = other.getDiamondName();
    this->hitPoints = other.getHitPoints();
    this->energyPoints = other.getEnergyPoints();
    this->attackDamage = other.getAttackDamage();
    return *this;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamonTrap destructor called" << std::endl;
}

std::string DiamondTrap::getDiamondName(void) const
{
    return this->name;
}

void    DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name is " << this->name;
    std::cout << " and it's ClapTrap name is " << this->ClapTrap::name << std::endl;
}