#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

# include <iostream>
# include <string>

class Zombie
{
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);
	void	setName(std::string newname);

private:
	std::string	name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
