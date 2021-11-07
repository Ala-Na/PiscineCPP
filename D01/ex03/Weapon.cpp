/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:57:34 by anadege           #+#    #+#             */
/*   Updated: 2021/11/07 17:56:31 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
	type = weapon;
	return ;
}

void	Weapon::setType(std::string const weapon)
{
	type = weapon;
}

std::string const &	Weapon::getType(void)
{
	return type;
}
