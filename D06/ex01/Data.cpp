/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:21:23 by anadege           #+#    #+#             */
/*   Updated: 2021/12/14 18:47:18 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

#include <stdint.h>

uintptr_t   serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data    *deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}