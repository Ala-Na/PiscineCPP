/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:14:18 by anadege           #+#    #+#             */
/*   Updated: 2021/12/14 18:47:05 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DATA_HPP__
#define __DATA_HPP__

#include <stdint.h>
#include <string>

struct Data
{
    int         i;
    float       f;
    double      d;
    char        c;
    std::string s;
};

uintptr_t   serialize(Data *ptr);
Data        *deserialize(uintptr_t raw);

#endif