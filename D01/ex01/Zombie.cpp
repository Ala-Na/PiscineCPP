/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 21:06:25 by anadege           #+#    #+#             */
/*   Updated: 2021/11/18 21:09:58 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
