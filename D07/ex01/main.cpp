/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:30:20 by anadege           #+#    #+#             */
/*   Updated: 2021/12/15 14:35:30 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <iostream>

#include <stddef.h>

int main()
{
    int a[5] = {0, 1, 2, 3, 4};
    for (int i = 0; i < 5; i++)
        std::cout << a[i] << " ";
    std::cout << "\n---> After iter" << std::endl;
    ::iter(a, 5, test_fun1);
    for (int i = 0; i < 5; i++)
        std::cout << a[i] << " ";
    std::cout << std::endl << std::endl;

    char b[3] = {'a', 'b', 'c'};
    for (int i = 0; i < 3; i++)
        std::cout << b[i] << " ";
    std::cout << "\n---> After iter" << std::endl;
    ::iter(b, 3, test_fun1);
    for (int i = 0; i < 3; i++)
        std::cout << b[i] << " ";
    std::cout << std::endl;

    std::string c[3] = {"C'est", "un", "test"};
    std::cout << "\n---> While iter" << std::endl;
    ::iter(c, 3, test_fun2);    
    std::cout << std::endl;
}