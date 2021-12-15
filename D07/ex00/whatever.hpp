/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:58:38 by anadege           #+#    #+#             */
/*   Updated: 2021/12/15 21:14:10 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_HPP__
#define __WHATEVER_HPP__

template <typename T>
void    swap(T &a, T &b)
{
    T   tmp(a);
    a = b;
    b = tmp;
};

template <typename T>
T   &min(T &a, T &b)
{
    return ((a < b) ? a : b);
};

template <typename T>
T   &max(T &a, T &b)
{
    return ((a > b) ? a : b);
};

#endif