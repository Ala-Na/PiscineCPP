/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:10:52 by anadege           #+#    #+#             */
/*   Updated: 2021/12/15 20:40:03 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{

    std::cout << "---> test suggested in subject" << std::endl;
    int *l = new int();
    std::cout << *l;
    delete l;
    
    std::cout << "\n\n---> iterate on empty array of int" << std::endl;
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
    std::cout << "\n---> iterate on array of int of size 5 with default value" << std::endl;
    Array<int> b(5);
    try
    {
        for (unsigned int i = 0; i < b.size(); i++)
            std::cout << b[i] << " ";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "\n\n---> iterate on array of string of size 5 with default value" << std::endl;
    Array<std::string> c(5);
    try
    {
        for (unsigned int i = 0; i < c.size(); i++)
        {
            if (c[i] == "")
                std::cout << "empty_value";
            std::cout << c[i] << " ";
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n\n---> iterate on empty array of string" << std::endl;
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
    
    std::cout << "\n---> iterate on array of float of size 5 with default value" << std::endl;
    Array<float> f(5);
    try
    {
        for (unsigned int i = 0; i < f.size(); i++)
            std::cout << f[i] << " ";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "\n\n---> iterate on array of string of size 5 with values" << std::endl;
    Array<std::string> g(5);
    try
    {
        g[0] = "C'est";
        g[1] = "nul";
        g[2] = "quand";
        g[3] = "c'est";
        g[4] = "vide!";
        for (unsigned int i = 0; i < g.size(); i++)
            std::cout << g[i] << " ";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n\n---> iterate on array of float of size 3 with values" << std::endl;
    Array<float> h(3);
    try
    {
        h[0] = 0.23;
        h[1] = 42;
        h[2] = 98.777;
        for (unsigned int i = 0; i < h.size(); i++)
            std::cout << h[i] << " ";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n\n---> random bad test 1 with array of 3 float and trying define value outside limits" << std::endl;
    Array<float> j(3);
    try
    {
        j[0] = 0.23;
        j[1] = 42;
        j[2] = 98.777;
        j[3] = 69.21;
        for (unsigned int i = 0; i < j.size(); i++)
            std::cout << j[i] << " ";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n\n---> overload operator = test" << std::endl;
    j = h;
    try
    {
        for (unsigned int i = 0; i < j.size(); i++)
            std::cout << j[i] << " ";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    Array<std::string> m(g);
    std::cout << "\n\n---> copy constructor test" << std::endl;
    try
    {
        for (unsigned int i = 0; i < m.size(); i++)
            std::cout << m[i] << " ";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    //m = j; //Impossible !
    // std::cout << "\n\n---> random bad test 2" << std::endl;
    // Array<float> k(3);
    // try
    // {
    //     k[0] = 0.23;
    //     k[1] = "lol";
    //     k[2] = 98.777;
    //     for (unsigned int i = 0; i < 3; i++)
    //         std::cout << k[i] << " ";
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    std::cout << std::endl;
}