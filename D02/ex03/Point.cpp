/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:52:33 by anadege           #+#    #+#             */
/*   Updated: 2021/11/25 16:12:06 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

Point::Point(void) : x(Fixed()), y(Fixed()) {;}

Point::Point(Fixed const &x, Fixed const &y) : x(x), y(y) {;}

Point::Point(Point const &src)
{
    *this = src;
}

Point::~Point(void) {;}

// Hi there. The following assignment operator is pretty bad.
// Helas, the subject is stupid as it force us to use Fixed const
// as Point class members.
// const shouldn't and can't be changed.
// The bsp function prototype is also given by the subject.
// But it use copy and not reference or pointers of Point objects.
// So I'm stuck and make vomit-code.
// Do not reproduce it otherwise.

Point   &Point::operator=(Point const &other)
{  
    Fixed   &new_x = const_cast <Fixed &> (this->x);
    Fixed   &new_y = const_cast <Fixed &> (this->y);    
    new_x = other.getX();
    new_y = other.getY();
    return *this;
}

Fixed const &Point::getX(void) const
{
    return this->x;
}


Fixed const &Point::getY(void) const
{
    return this->y;
}
