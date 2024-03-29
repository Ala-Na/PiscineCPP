/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:11:20 by anadege           #+#    #+#             */
/*   Updated: 2021/12/15 21:04:37 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"

int main( void )
{
    int a = 2;
    int b = 3;
    std::cout << "a = " << a << ", b = " << b << "\n" << std::endl;
    std::cout << "---> Let's swap !" << std::endl;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << "\n" << std::endl;
    std::cout << "---> Let's check min/max" << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << "\n" << std::endl;
    
    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "c = " << c << ", d = " << d << "\n" << std::endl;
    std::cout << "---> Let's swap !" << std::endl;
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << "\n" << std::endl;
    std::cout << "---> Let's check min/max" << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << "\n" << std::endl;

    float e = 42.42f;
    float f = 42.41f;
    std::cout << "e = " << e << ", f = " << f << "\n" << std::endl;
    std::cout << "---> Let's swap !" << std::endl;
    ::swap(e, f);
    std::cout << "e = " << e << ", f = " << f << "\n" << std::endl;
    std::cout << "---> Let's check min/max" << std::endl;
    std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
    std::cout << "max( e, f ) = " << ::max( e, f ) << "\n" << std::endl;

    return 0;
}