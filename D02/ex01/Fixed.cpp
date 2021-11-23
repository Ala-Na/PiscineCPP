/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:09:29 by anadege           #+#    #+#             */
/*   Updated: 2021/11/23 16:09:29 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <math.h>

Fixed::Fixed(void) : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = value << Fixed::fracBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = (int)(std::roundf(value * (1 << Fixed::fracBits)));
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignation operator called" << std::endl;    
    this->value = rhs.getRawBits();
    return *this;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
} 

float   Fixed::toFloat(void) const
{
    return (float)this->value / (1 << Fixed::fracBits);
}

int     Fixed::toInt(void) const
{
    return (int)(this->value >> Fixed::fracBits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
    o << fixed.toFloat();
    return o;
}