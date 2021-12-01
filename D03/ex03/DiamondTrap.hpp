/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:26:26 by anadege           #+#    #+#             */
/*   Updated: 2021/12/01 11:26:26 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__

#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
    public:
        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const &src);
        ~DiamondTrap(void);

        DiamondTrap &operator=(DiamondTrap const &other);

        void    whoAmI();
        void    attack(std::string const &target);

        std::string getDiamondName(void) const;

    private:
        std::string name;
};

#endif