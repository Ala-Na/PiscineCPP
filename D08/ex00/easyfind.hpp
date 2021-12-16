/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:14:09 by anadege           #+#    #+#             */
/*   Updated: 2021/12/16 14:52:06 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

#include <algorithm>
#include <iterator>
#include <iostream>

struct  ValueNotFound : public std::exception 
{
    public:
        virtual const char  *what(void) const throw()
        {
            return "Value not found in container";
        }
};

struct  ErrorInContainer : public std::exception 
{
    public:
        virtual const char  *what(void) const throw()
        {
            return "Error in container";
        }
};

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
    typename T::iterator it;
    
    try
    {
        it = std::find(container.begin(), container.end(), value);
    }
    catch(const std::exception &e)
    {
        throw ErrorInContainer();
    }
    if (it != container.end())
        return it;
    throw ValueNotFound();  
};

#endif