/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:25:55 by anadege           #+#    #+#             */
/*   Updated: 2021/12/04 21:25:38 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include <string>

class WrongAnimal
{
    public:
        WrongAnimal(void);
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &src);
        ~WrongAnimal(void);
        
        WrongAnimal  &operator=(WrongAnimal const &other);

        std::string     getType(void) const;
        void    makeSound(void) const;
    
    protected:
        std::string type;
};

class WrongDog : public WrongAnimal
{
    public:
        WrongDog(void);
        WrongDog(WrongDog const &src);
        ~WrongDog(void);

        WrongDog &operator=(WrongDog const &other);

        void    makeSound(void) const;
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(WrongCat const &src);
        ~WrongCat(void);

        WrongCat &operator=(WrongCat const &other);

        void    makeSound(void) const;
};

#endif