/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:52:38 by anadege           #+#    #+#             */
/*   Updated: 2021/11/24 16:15:40 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_H__
# define __POINT_H__

#include <iostream>
#include "Fixed.hpp"

class	Point
{
public:
    Point(void);
    Point(Fixed const &x, Fixed const &y);
    Point(Point const &src);
    ~Point(void);

    Point   &operator=(Point const &other);

    Fixed const   &getX(void) const;
    Fixed const   &getY(void) const;
   
private:
    Fixed const x;
    Fixed const y;
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif