# include "Zombie.hpp"

Zombie::Zombie(void)
{
	name = "";
}

Zombie::Zombie(std::string zombie_name) : name(zombie_name)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << name << " was shot by a survivor." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << name << "> ";
	std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string newname)
{
	name = newname;
}
