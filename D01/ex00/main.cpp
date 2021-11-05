#include "Zombie.hpp"

int main()
{
    std::cout << "Zombie invasion simulation beggin !\n" << std::endl;


    std::cout << "\nLet's make few zombies on the stack\n" << std::endl;

    std::string name1;
    std::cout << "Name zombie 1: ";
    std::getline(std::cin, name1);
    Zombie zombie1 = Zombie(name1);
    std::string name2;
    std::cout << "Name zombie 2: ";
    std::getline(std::cin, name2);
    Zombie zombie2 = Zombie(name2);

    std::cout << "\nLet's them announce themselves\n" << std::endl;

    zombie1.announce();
    zombie2.announce();

    std::cout << "\nLet's make few more zombies, but on the heap\n" << std::endl;

    std::string name3;
    std::cout << "Name zombie 3: ";
    std::getline(std::cin, name3);
    Zombie *zombie3 = newZombie(name3);
    std::string name4;
    std::cout << "Name zombie 4: ";
    std::getline(std::cin, name4);
    Zombie *zombie4 = newZombie(name4);

    std::cout << "\nLet's them announce themselves\n" << std::endl;

    zombie3->announce();
    zombie4->announce();

    std::cout << "\nOne last zombie ?\n" << std::endl;

    std::string name5;
    std::cout << "Name zombie 5: ";
    std::getline(std::cin, name5);
    randomChump(name5);

    std::cout << "\nWAIT ! What was that sound ?!" << std::endl;
    std::cout << "There's survivors nearby... OH GOSH, THEY HAVE GUNS !!!\n" << std::endl;

    delete(zombie3);

    std::cout << "\nOh no ! They killed "<< name3 <<" !!!\n" << std::endl;

    delete(zombie4);

    std::cout << "\nIt's "<< name4 <<" turn !!!\n" << std::endl;
    std::cout << "Let's fly ! Wait ! We're embushed...\n" << std::endl;

    return (0);
}