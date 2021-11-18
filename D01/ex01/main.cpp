/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:53:59 by anadege           #+#    #+#             */
/*   Updated: 2021/11/18 21:20:45 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::cout << "Zombie horde invasion simulation beggin !\n" << std::endl;

	std::string	name;
	std::cout << "Enter your zombie horde name : ";
	std::getline(std::cin, name);
	std::cout << std::endl;

	Zombie	*horde = zombieHorde(7, name);
	std::cout << "\nHorde creation !" << std::endl;

	std::cout << "\nHorde presentation:\n" << std::endl;

	for (int i = 0; i < 7; i++)
		horde[i].announce();

	std::cout << "\nGood zombies. Now, you're not useful anymore !!! Mwahaha !\n" << std::endl;
	delete [] horde;
	std::cout << "\nEnd of simulation" << std::endl;

	return (0);
}
