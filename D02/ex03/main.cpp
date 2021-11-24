/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:09:25 by anadege           #+#    #+#             */
/*   Updated: 2021/11/24 17:43:30 by anadege          ###   ########.fr       */
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

    Point p1(zero, zero);
    Point p2(half, one);
    Point p3(one, zero);

    Point inside(half, half);
    Point outside(zero, minus);

    if (bsp(p1, p2, p3, inside) == true)
        std::cout << "Inside in triangle" << std::endl;

    if (bsp(p1, p2, p3, outside) == false)
        std::cout << "Outside not in triangle" << std::endl;

    return 0;
}
