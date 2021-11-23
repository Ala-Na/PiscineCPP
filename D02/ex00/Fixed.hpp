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

class	Fixed
{
public:
    Fixed(void);
    Fixed(Fixed const & src);
    ~Fixed(void);
    Fixed   &operator=(Fixed const & rhs);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);

private:
    int value;
    static const int  fracBits = 8;
};

#endif