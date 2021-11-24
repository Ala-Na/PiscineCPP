/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:52:38 by anadege           #+#    #+#             */
/*   Updated: 2021/11/24 14:20:22 by anadege          ###   ########.fr       */
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
    Point(Fixed const x, Fixed const y);
    Point(Point const &src);
    ~Point(void);

    Point   &operator=(Point const &other);

    Fixed const &getX(void);
    Fixed const &getY(void);
   
private:
    Fixed const x;
    Fixed const y;
};

#endif