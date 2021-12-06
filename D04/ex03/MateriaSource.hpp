/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:05:36 by anadege           #+#    #+#             */
/*   Updated: 2021/12/06 11:18:24 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

#include <string>
#include "Materia.hpp"

class IMateriaSource //PURE ABSTRACT CLASS = INTERFACE
{
    public:
        virtual             ~IMateriaSource(void);
        virtual void        learnMateria(AMateria*) = 0;
        virtual AMateria    *createMateria(std::string const &type) = 0;
};

class MateriaSource : public IMateriaSource
{
      public:
        MateriaSource(void);
        MateriaSource(MateriaSource const &src);
        ~MateriaSource(void);

        MateriaSource &operator=(MateriaSource const &other);
        
        void            learnMateria(AMateria*) = 0;
        AMateria        *createMateria(std::string const &type) = 0;
        AMateria const  &getMateria(int idx) const;

    protected:
        AMateria    *materia[4];
};

#endif