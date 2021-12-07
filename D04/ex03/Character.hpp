/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:24:30 by anadege           #+#    #+#             */
/*   Updated: 2021/12/07 18:16:00 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include <string>
#include "Materia.hpp"

class AMateria;

class ICharacter // INTERFACE (pure abstract class)
{
    public:
        virtual ~ICharacter(void) {}
        virtual std::string const &getName(void) const = 0;
        virtual void equip(AMateria *m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter &target) = 0;
};

class Character : public ICharacter
{
    public:
        Character(void);
        Character(std::string name);
        Character(Character const &src);
        ~Character(void);
        
        Character  &operator=(Character const &other);
        
        AMateria    *accessMateria(int idx) const;
        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);

    private:
        AMateria            *materia[4];
        std::string const   name;
};

#endif