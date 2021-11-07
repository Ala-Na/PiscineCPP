/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:10:20 by anadege           #+#    #+#             */
/*   Updated: 2021/11/07 18:17:39 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
# define __HUMANA_H__

# include "Weapon.hpp"
# include <string>
# include <iostream>

class	HumanA
{
public:
	HumanA(std::string name_a, Weapon &weapon_a);
	void	attack(void);

private:
	std::string const name;
	Weapon *weapon;
};

#endif
