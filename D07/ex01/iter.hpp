/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:15:08 by anadege           #+#    #+#             */
/*   Updated: 2021/12/15 21:13:41 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <stddef.h>
#include <functional>
#include <iostream>

template <typename T>
T   test_fun1(T &a)
{
    return ++a;
};

template <typename T>
void   test_fun2(T &a)
{
    std::cout << a << " ";
};

template <typename T>
void    iter(T *arr, size_t arr_size, T (*function)(T&))
{
    for (size_t i = 0; i < arr_size; i++)
        arr[i] = function(arr[i]);
};

template <typename T>
void    iter(T *arr, size_t arr_size, void (*function)(T const &))
{
    for (size_t i = 0; i < arr_size; i++)
        function(arr[i]);
};

#endif