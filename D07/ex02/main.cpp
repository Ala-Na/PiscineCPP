/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:10:52 by anadege           #+#    #+#             */
/*   Updated: 2021/12/15 18:31:12 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{
    std::cout << "--> iterate on empty array of int" << std::endl;
    Array<int> a;
    try
    {
        for (unsigned int i = 0; i < 3; i++)
            std::cout << a[i];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "\n---> iterate on array of int of size 5" << std::endl;
    Array<int> b(5);
    try
    {
        for (unsigned int i = 0; i < 5; i++)
            std::cout << b[i] << " ";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "\n\n---> iterate on array of string of size 5" << std::endl;
    Array<std::string> c(5);
    try
    {
        for (unsigned int i = 0; i < 5; i++)
            std::cout << c[i] << " ";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n\n--> iterate on empty array of string" << std::endl;
    Array<int> d;
    try
    {
        for (unsigned int i = 0; i < 3; i++)
            std::cout << d[i];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n\n---> iterate on empty array of float" << std::endl;
    Array<float> e;
    try
    {
        for (unsigned int i = 0; i < 3; i++)
            std::cout << e[i];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "\n---> iterate on array of float of size 5" << std::endl;
    Array<float> f(5);
    try
    {
        for (unsigned int i = 0; i < 5; i++)
            std::cout << f[i] << " ";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
}