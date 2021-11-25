/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:09:27 by anadege           #+#    #+#             */
/*   Updated: 2021/11/25 16:00:17 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
# define __FIXED_H__

#include <iostream>
#include <cmath>

class	Fixed
{
public:
    Fixed(void);
    Fixed(const int value);
    Fixed(const float value);
    Fixed(Fixed const &src);
    ~Fixed(void);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

    float   toFloat(void) const;
    int     toInt(void) const;

    Fixed   &operator=(Fixed const &other);

    bool    operator==(const Fixed &other) const;
    bool    operator!=(const Fixed &other) const;
    bool    operator<(const Fixed &other) const;
    bool    operator>(const Fixed &other) const;
    bool    operator<=(const Fixed &other) const;
    bool    operator>=(const Fixed &other) const;

    Fixed   operator+(const Fixed &other) const;
    Fixed   operator-(const Fixed &other) const;
    Fixed   operator*(const Fixed &other) const;
    Fixed   operator/(const Fixed &other) const;

    Fixed   &operator++(void);
    Fixed   &operator--(void);    
    Fixed   operator++(int);
    Fixed   operator--(int);

    static const Fixed   &min(Fixed const &x, Fixed const &y);
    static const Fixed   &max(Fixed const &x, Fixed const &y);
    static Fixed         &min(Fixed &x, Fixed &y);
    static Fixed         &max(Fixed &x, Fixed &y);

private:
    int                 value;
    static const int    fracBits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

#endif