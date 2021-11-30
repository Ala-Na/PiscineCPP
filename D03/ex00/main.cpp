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
#include <string>
#include <iostream>

int main()
{
    ClapTrap cp1;
    ClapTrap cp2("CL4P-TP");
    ClapTrap cp3(cp2);
    cp1 = cp2;

    std::cout << cp1.getName() << std::endl;
    std::cout << cp2.getName() << std::endl;
    std::cout << cp3.getName() << std::endl;

    cp1.attack("Invicible");
    cp1.beRepaired(10);
    cp1.takeDamage(10);
    cp1.takeDamage(100);
}