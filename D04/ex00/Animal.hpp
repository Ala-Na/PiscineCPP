/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:25:55 by anadege           #+#    #+#             */
/*   Updated: 2021/12/04 21:23:40 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <string>

class Animal
{
    public:
        Animal(void);
        Animal(std::string type);
        Animal(Animal const &src);
        ~Animal(void);
        
        Animal  &operator=(Animal const &other);

        std::string     getType(void) const;
        virtual void    makeSound(void) const;
    
    protected:
        std::string type;
};

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(Dog const &src);
        ~Dog(void);

        Dog &operator=(Dog const &other);

        void    makeSound(void) const;
};

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(Cat const &src);
        ~Cat(void);

        Cat &operator=(Cat const &other);

        void    makeSound(void) const;
};

#endif