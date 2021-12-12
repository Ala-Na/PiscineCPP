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
#include <string>
#include <iostream>

int main()
{
    FragTrap ft1;
    std::cout << ft1.getName() << std::endl;
    FragTrap ft2("High Five Hard Core Fan");
    FragTrap ft3(ft2);
    ft1 = ft2;

    std::cout << ft1.getName() << std::endl;
    std::cout << ft2.getName() << std::endl;
    std::cout << ft3.getName() << std::endl;

    ft1.attack("Invicible");
    ft1.beRepaired(10);
    ft1.takeDamage(10);
    ft1.takeDamage(100);
    ft1.highFivesGuys();
    std::cout << "Energy points : " << ft1.getEnergyPoints() << std::endl;
}