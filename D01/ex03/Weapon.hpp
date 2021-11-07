/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:58:15 by anadege           #+#    #+#             */
/*   Updated: 2021/11/07 17:56:16 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
# define __WEAPON_H__

# include <iostream>
# include <string>

class	Weapon
{
public:
	Weapon(std::string weapon);
	std::string const &	getType(void);
	void	setType(std::string const weapon);

private:
	std::string	type;

};

#endif
