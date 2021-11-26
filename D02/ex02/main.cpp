/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:09:25 by anadege           #+#    #+#             */
/*   Updated: 2021/11/23 16:09:25 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void) {
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    Fixed const c;
    Fixed d(5);
    Fixed e(10);

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max(a, b) << std::endl;
    std::cout << Fixed::min(c, b) << std::endl;
    std::cout << Fixed::max(a, d) << std::endl;

    std::cout << e << std::endl;
    std::cout << --e << std::endl;
    std::cout << e << std::endl;
    std::cout << e-- << std::endl;
    std::cout << e << std::endl;

    if (c == a)
        std::cout << "a equal c" << std::endl;
    if (b >= a)
        std::cout << "b sup or equal a" << std::endl;
    if (b > a)
        std::cout << "b sup a" << std::endl;
    if (a <= b)
        std::cout << "a inf or equal b" << std::endl;
    if (a < b)
        std::cout << "a inf b" << std::endl;
    if (a != b)
        std::cout << "a diff b" << std::endl;

    std::cout << a * d << std::endl;
    std::cout << d / b << std::endl;
    std::cout << d << " + " << b << " = " << d + b << std::endl;
    std::cout << d << " - " << b << " = " << d - b << std::endl;
    return 0;
}
