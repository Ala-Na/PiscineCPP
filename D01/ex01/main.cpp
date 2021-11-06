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
