/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:58:38 by anadege           #+#    #+#             */
/*   Updated: 2021/12/15 11:16:49 by anadege          ###   ########.fr       */
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
}

template <typename T>
T const &min(T const &a, T const &b)
{
    return ((a < b) ? a : b);
}

template <typename T>
T const &max(T const &a, T const &b)
{
    return ((a > b) ? a : b);
}

#endif