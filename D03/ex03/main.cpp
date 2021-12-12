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
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <string>
#include <iostream>

int main()
{
    DiamondTrap dt1;
    dt1.whoAmI();
    DiamondTrap dt2("JohnDoe");
    DiamondTrap dt3(dt2);
    dt1 = dt2;

    dt1.whoAmI();
    dt2.whoAmI();
    dt3.whoAmI();

    dt1.attack("Invicible");
    dt1.beRepaired(10);
    dt1.takeDamage(10);
    dt1.takeDamage(100);
    std::cout << "Energy points : " << dt1.getEnergyPoints() << std::endl;
    dt1.highFivesGuys();
    dt1.guardGate();
}