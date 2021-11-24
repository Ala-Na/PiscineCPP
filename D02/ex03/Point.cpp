/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:52:33 by anadege           #+#    #+#             */
/*   Updated: 2021/11/24 14:26:02 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

Point::Point(void) : x(Fixed()), y(Fixed())
{
}

Point::Point(Fixed const x, Fixed const y) : x(x), y(y)
{
}

Point::Point(Point const &src)
{
    *this = src;
}

Point::~Point(void)
{
}

Point   &Point::operator=(Point const &other)
{  
    (void)other;
    return *this;
}

Fixed const &Point::getX(void)
{
    return this->x;
}

Fixed const &Point::getY(void)
{
    return this->y;
}