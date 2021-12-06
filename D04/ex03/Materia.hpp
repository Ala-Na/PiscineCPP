/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 09:52:32 by anadege           #+#    #+#             */
/*   Updated: 2021/12/06 18:18:44 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIA_HPP__
#define __MATERIA_HPP__

#include <string>
#include "Character.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string type;

    public:
        AMateria(void);
        AMateria(std::string const &type);
        AMateria(AMateria const &src);
        virtual ~AMateria(void);
        
        AMateria &operator=(AMateria const &other);

        std::string const &getType(void) const;
        virtual AMateria* clone(void) const = 0;
        virtual void use(ICharacter &target);
};

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(Ice const &src);
        ~Ice (void);
        
        void    use(ICharacter &target);
        Ice     *clone(void) const;    
};

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(Cure const &src);
        ~Cure (void);

        void    use(ICharacter &target);
        Cure    *clone(void) const;      
};

#endif