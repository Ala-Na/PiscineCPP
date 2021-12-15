/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:22:18 by anadege           #+#    #+#             */
/*   Updated: 2021/12/15 20:38:17 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <stdexcept>

template <typename T>
class Array
{
    public:
        Array(void) : arr_size(0)
        {
            
            this->array = new T[0];
        };
        Array(unsigned int n) : arr_size(n)
        {
            this->array = new T[this->arr_size]();
        };
        Array(Array const &src) : arr_size(src.size())
        {
            if (this->arr_size == 0)
                this->array = new T[0];
            else
            {
                this->array = new T[this->arr_size]();
                for (unsigned int i = 0; i < this->arr_size; i++)
                    this->array[i] = src.array[i];
            }
        };
        ~Array(void)
        {
            delete[] this->array;  
        };
        
        Array   &operator=(Array const &other)
        {
            delete[] this->array;
            this->arr_size = other.size();
            if (this->arr_size == 0)
                this->array = new T[0];
            else
            {
                this->array = new T[this->arr_size]();
                for (unsigned int i = 0; i < this->arr_size; i++)
                    this->array[i] = other.array[i];
            }
            return *this;
        }; 
        T       &operator[](int idx)
        {
            if (idx < 0 || static_cast<unsigned int>(idx) >= this->arr_size)
                throw OutsideLimitsException();
            return this->array[idx];
        };

        unsigned int const  &size(void) const
        {
            return this->arr_size;
        };

        class   OutsideLimitsException : public std::exception {
            public:
                virtual const char  *what(void) const throw()
                {
                    return "index is outside array limits";
                }
        };

    private:
        T               *array;
        unsigned int    arr_size;
};

#endif