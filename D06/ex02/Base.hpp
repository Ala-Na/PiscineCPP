/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:57:07 by anadege           #+#    #+#             */
/*   Updated: 2021/12/14 19:39:53 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE_HPP__
#define __BASE_HPP__


class Base
{
    public:
        virtual ~Base(void);  
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base    *generate(void); 
void    identify(Base *p);
void    identify(Base &p);

#endif