/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:15:08 by anadege           #+#    #+#             */
/*   Updated: 2021/12/15 12:32:31 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
#define __ITER_HPP__

template <typename T>
T   test_fun(T)
{
    return (T + 1);
}

template <typename T>
void    iter(T *arr, size_t arr_size, T (*function)(T))
{
    for (size_t i = 0; i < arr_size; i++)
        T[i] = function(T[i]);
}

#endif