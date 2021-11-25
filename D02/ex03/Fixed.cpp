/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:09:29 by anadege           #+#    #+#             */
/*   Updated: 2021/11/25 16:00:32 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : value(0) {;}

Fixed::Fixed(const int value)
{
    this->value = value << Fixed::fracBits;
}

Fixed::Fixed(const float value)
{
    this->value = (int)(roundf(value * (1 << Fixed::fracBits)));
}

Fixed::Fixed(Fixed const &src)
{
    this->value = src.getRawBits();
}

Fixed::~Fixed(void) {;}

Fixed   &Fixed::operator=(Fixed const &other)
{  
    this->value = other.getRawBits();
    return *this;
}

int     Fixed::getRawBits(void) const
{
    return this->value;
}

void    Fixed::setRawBits(int const raw)
{
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

bool    Fixed::operator==(const Fixed &other) const
{
    if (this->getRawBits() == other.getRawBits()) {
        return true;
    }
    return false;
}

bool    Fixed::operator!=(const Fixed &other) const
{
    if (this->getRawBits() != other.getRawBits()) {
        return true;
    }
    return false;
}

bool    Fixed::operator<(const Fixed &other) const
{
    if (this->getRawBits() < other.getRawBits()) {
        return true;
    }
    return false;
}

bool    Fixed::operator>(const Fixed &other) const
{
    if (this->getRawBits() > other.getRawBits()) {
        return true;
    }
    return false;
}

bool    Fixed::operator<=(const Fixed &other) const
{
    if (this->getRawBits() <= other.getRawBits()) {
        return true;
    }
    return false;
}

bool    Fixed::operator>=(const Fixed &other) const
{
    if (this->getRawBits() >= other.getRawBits()) {
        return true;
    }
    return false;
}

Fixed   Fixed::operator+(const Fixed &other) const
{
    Fixed res;

    res.setRawBits(this->getRawBits() + other.getRawBits());
    return res;
}

Fixed   Fixed::operator-(const Fixed &other) const
{
    Fixed res;

    res.setRawBits(this->getRawBits() - other.getRawBits());
    return res;
}

Fixed   Fixed::operator*(const Fixed &other) const
{
    Fixed res;

    res.setRawBits((this->getRawBits() * other.getRawBits()) >> this->fracBits);
    return res;
}

Fixed   Fixed::operator/(const Fixed &other) const
{
    Fixed res;

    res.setRawBits((this->getRawBits() << this->fracBits) / other.getRawBits());
    return res;
}

Fixed   &Fixed::operator++(void)
{
    this->setRawBits(this->value + 1);
    return *this;
}

Fixed   &Fixed::operator--(void)
{
    this->setRawBits(this->value - 1);
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed   res;

    res.setRawBits(this->value + 1);
    return res;
}

Fixed   Fixed::operator--(int)
{
    Fixed   res;

    res.setRawBits(this->value - 1);
    return res;
}

const Fixed   &Fixed::min(Fixed const &x, Fixed const &y)
{
    if (x.getRawBits() < y.getRawBits())
        return x;
    return y;
}

const Fixed   &Fixed::max(Fixed const &x, Fixed const &y)
{
    if (x.getRawBits() > y.getRawBits())
        return x;
    return y;
}

Fixed   &Fixed::min(Fixed &x, Fixed &y)
{
    return (x < y ? x : y);
}

Fixed   &Fixed::max(Fixed &x, Fixed &y)
{
    return (x > y ? x : y);
}