/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:10:13 by anadege           #+#    #+#             */
/*   Updated: 2021/11/07 18:17:59 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name_a, Weapon &weapon_a) : name(name_a), weapon(&weapon_a)
{
	return ;
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
