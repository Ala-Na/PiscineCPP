/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:09:27 by anadege           #+#    #+#             */
/*   Updated: 2021/11/23 16:09:27 by anadege          ###   ########.fr       */
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
    Fixed   &operator=(Fixed const &rhs);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

private:
    int                 value;
    static const int    fracBits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

#endif