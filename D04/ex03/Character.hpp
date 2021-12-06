/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:24:30 by anadege           #+#    #+#             */
/*   Updated: 2021/12/06 10:29:39 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include <string>
#include "Materia.hpp"

class ICharacter
{
    public:
        ICharacter(void);
        ICharacter(std::string name);
        ICharacter(ICharacter const &src);
        virtual ~ICharacter(void);
        
        ICharacter  &operator=(ICharacter const &other);
        
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;

    protected:
        AMateria    *materia[4];
        std::string name;
};

#endif