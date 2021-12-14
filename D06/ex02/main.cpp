/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:16:28 by anadege           #+#    #+#             */
/*   Updated: 2021/12/14 19:29:22 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>

int main()
{
    Base *base;

    srand((unsigned)time(NULL));
    
    base = generate();
    identify(base);
    identify(*base);
    delete base;

    std::cout << std::endl;

    base = generate();
    identify(base);
    identify(*base);
    delete base;

    std::cout << std::endl;

    base = generate();
    identify(base);
    identify(*base);
    delete base;

    std::cout << std::endl;

    base = generate();
    identify(base);
    identify(*base);
    delete base;

    std::cout << std::endl;

    base = generate();
    identify(base);
    identify(*base);
    delete base;

    std::cout << std::endl;

    base = generate();
    identify(base);
    identify(*base);
    delete base;
    
    return 0;
    
}