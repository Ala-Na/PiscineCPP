/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:09:25 by anadege           #+#    #+#             */
/*   Updated: 2021/11/25 16:10:34 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main(void) {    
    Fixed const zero(0);
    Fixed const one(1);
    Fixed const half(0.5f);
    Fixed const minus(-1);
    Fixed const quart(0.25f);

    Point p1(zero, zero);
    Point p2(half, one);
    Point p3(one, zero);

    Point inside0(half, half);
    Point outside(zero, minus);
    Point side(zero, half);
    Point inside1(half, quart);

    if (bsp(p1, p2, p3, inside0) == true)
        std::cout << "Inside0 in triangle" << std::endl;

    if (bsp(p1, p2, p3, inside1) == true)
        std::cout << "Inside1 in triangle" << std::endl;

    if (bsp(p1, p2, p3, outside) == false)
        std::cout << "Outside not in triangle" << std::endl;

    if (bsp(p1, p2, p3, p1) == false)
        std::cout << "Apex not in triangle" << std::endl;

    if (bsp(p1, p2, p3, side) == false)
        std::cout << "Side not in triangle" << std::endl;

    return 0;
}
