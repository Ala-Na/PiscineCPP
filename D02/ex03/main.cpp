/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:09:25 by anadege           #+#    #+#             */
/*   Updated: 2021/11/24 14:29:03 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main(void) {    
    Fixed a(4);
    Fixed b(2.5);
    Point p(a, b);

    std::cout << p.getX().toFloat() << std::endl;
    std::cout << p.getY().toFloat() << std::endl;

    return 0;
}
