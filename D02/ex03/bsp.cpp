/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:52:43 by anadege           #+#    #+#             */
/*   Updated: 2021/11/25 16:29:51 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed   triangleArea(Point const a, Point const b, Point const c)
{
    Fixed   area;
    Fixed   apex1;
    Fixed   apex2;
    Fixed   apex3;

    apex1 = a.getX() * (b.getY() - c.getY());
    apex2 = b.getX() * (c.getY() - a.getY());
    apex3 = c.getX() * (a.getY() - b.getY());
    area = (apex1 + apex2 + apex3) / 2;
    
    if (area.toInt() < 0)
        area.setRawBits(area.getRawBits() * -1);
        
    return area;
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed zero;
    Fixed areaTriangle = triangleArea(a, b, c);

    Fixed areaSub1 = triangleArea(point, a, b);
    Fixed areaSub2 = triangleArea(point, b, c);
    Fixed areaSub3 = triangleArea(point, a, c);
    if (areaSub1 == 0 || areaSub2 == 0 || areaSub3 == 0)
        return false;
    Fixed compArea = areaSub1 + areaSub2 + areaSub3;
 
    return compArea == areaTriangle;
}