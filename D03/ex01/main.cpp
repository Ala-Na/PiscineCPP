/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:25:25 by anadege           #+#    #+#             */
/*   Updated: 2021/11/30 17:25:25 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

int main()
{
    ScavTrap sp1;
    std::cout << sp1.getName() << std::endl;
    
    ScavTrap sp2("SCV-4RT");
    ScavTrap sp3(sp2);
    sp1 = sp2;

    std::cout << sp1.getName() << std::endl;
    std::cout << sp2.getName() << std::endl;
    std::cout << sp3.getName() << std::endl;

    sp1.attack("Invicible");
    sp1.beRepaired(10);
    sp1.takeDamage(10);
    sp1.takeDamage(100);
    sp1.guardGate();
    std::cout << "Energy points : " << sp1.getEnergyPoints() << std::endl;
}