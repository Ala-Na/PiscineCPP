/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:09:06 by anadege           #+#    #+#             */
/*   Updated: 2021/12/14 16:24:02 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>
#include <string>
#include <stdio.h>

int error_message(void)
{
    std::cerr << "\n\033[1;31m\t\t\t --- ERROR ---\033[0m\n" << std::endl;
    std::cerr << "\033[3;33mProgramm take a single string as parameter with printables characters only\033[0m\n" << std::endl;
    return 1;
}

int main(int argc, char **argv)
{
    std::string param;
    
    if (argc != 2)
        return error_message();
    try
    {
        Convert conv(argv[1]);
        std::cout << conv << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}