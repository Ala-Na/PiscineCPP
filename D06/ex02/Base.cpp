/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:02:20 by anadege           #+#    #+#             */
/*   Updated: 2021/12/14 19:46:15 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdlib>

Base::~Base(void) {}

Base    *generate(void)
{
    int     class_type;
    Base    *ptr;

    class_type = rand() % 3;
    if (class_type == 0)
    {
        std::cout << "A is generated" << std::endl;
        ptr = new A();
    }
    else if (class_type == 1)
    {
        std::cout << "B is generated" << std::endl;
        ptr = new B();
    }
    else
    {
        std::cout << "C is generated" << std::endl;
        ptr = new C();
    }
    return ptr;
}

void    identify(Base *p)
{
    A   *a;
    B   *b;
    C   *c;

    a = dynamic_cast<A *>(p);
    if (a != NULL)
    {
        std::cout << "A" << std::endl;
        return;
    }
    b = dynamic_cast<B *>(p);
    if (b != NULL)
    {
        std::cout << "B" << std::endl;
        return;
    }
    c = dynamic_cast<C *>(p);
    if (c != NULL)
    {
        std::cout << "C" << std::endl;
        return;
    }
    std::cerr << "dynamic cast error" << std::endl;
}

void    identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch(const std::exception &e)
    {
        try
        {
            B &b = dynamic_cast<B &>(p);
            std::cout << "B" << std::endl;
            (void)b;
        }
        catch(const std::exception &e)
        {
            try
            {
                C &c = dynamic_cast<C &>(p);
                std::cout << "C" << std::endl;
                (void)c;
            }
            catch(const std::exception &e)
            {
                std::cerr << "error in dynamic cast" << std::endl;
            }
        }
    }
}