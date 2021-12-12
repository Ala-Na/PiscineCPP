/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:20:40 by anadege           #+#    #+#             */
/*   Updated: 2021/11/30 20:20:40 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &src);
        ~ScavTrap(void);

        ScavTrap &operator=(ScavTrap const &other);
        
        void    attack(std::string const &target);
        void    guardGate(void);

        unsigned int    getEnergyPoints(void) const;

    protected:
        unsigned int    energyPoints;
};

#endif