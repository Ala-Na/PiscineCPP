/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:21:52 by anadege           #+#    #+#             */
/*   Updated: 2021/11/07 18:19:00 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
# define __HUMANB_H__

# include "Weapon.hpp"
# include <string>
# include <iostream>

class	HumanB
{
public:
	HumanB(std::string name);
	void	attack(void);
	void	setWeapon(Weapon &new_weapon);

private:
	Weapon *weapon;
	std::string const name;
};

#endif
