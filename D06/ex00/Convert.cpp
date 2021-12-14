/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:46:41 by anadege           #+#    #+#             */
/*   Updated: 2021/12/14 17:27:59 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <cstdio>
#include <cctype>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <limits>
#include <cmath>

Convert::Convert(void) : value(-42)
{
    throw InvalidParameter();
}

Convert::Convert(char const *param)
{
    double  val;
    if (checkValidDouble(static_cast<std::string>(param)) == false)
        throw InvalidParameter();
    sscanf(param, "%lf", &val);
    this->value = val;
    if (val == 0 && strlen(param) == 1 && isprint(param[0]))
    {
        char    c;
        sscanf(param, "%c", &c);
        this->value = static_cast<double>(c);
    }
    else if (strlen(param) == 5 && param[0] == '+')
    {
        std::cout << "here" << std::endl;
        this->value = std::numeric_limits<double>::infinity();
    }
}

bool    Convert::checkValidDouble(std::string param) const
{
    int nbr_dot;
    std::string spec_nb[6] = {"-inff", "+ inff", "nanf", "-inf", "+ inf", "nan"};

    nbr_dot = 0;
    for (int i = 0; i < 6; i++)
    {
        if (param.compare(spec_nb[i]) == 0)
            return true;
    }
    if (param.length() == 1 && isprint(param[0]) == true)
        return true;
    for (size_t i = 0; i < param.length(); i++)
    {
        if (isdigit(param[i]) == false && param[i] != '.')
        {
            if (i != param.length() - 1 || param[i] != 'f')
                return false;
        }
        if (param[i] == '.')
            nbr_dot++;
    }
    if (nbr_dot > 1 || param.empty() == true)
        return false;
    return true;
}

Convert::Convert(Convert const &src)
{
    this->value = src.getDoubleValue();
}

Convert::~Convert(void) {}

Convert &Convert::operator=(Convert const &other)
{
    this->value = other.getDoubleValue();
    return *this;
}

double const    &Convert::getDoubleValue(void) const
{
    return this->value;
}

char    Convert::convertToChar(void) const
{
    int i;

    i = this->convertToInt();
    if (i < 32 || i > 126)
        throw NonDisplayable();
    return static_cast<char>(this->value);
}

int Convert::convertToInt(void) const
{
    int max;
    int min;
    
    max = std::numeric_limits<int>::max();
    min = std::numeric_limits<int>::min();
    if (this->value > max || this->value < min)
        throw ConversionImpossible();
    return static_cast<int>(this->value);
}

float   Convert::convertToFloat(void) const
{
    float   max;
    float   min;
    
    if (this->value == std::numeric_limits<double>::infinity())
        return std::numeric_limits<float>::infinity();
    max = std::numeric_limits<float>::max();
    min = std::numeric_limits<float>::min();
    if (this->value > max || this->value < min)
        throw ConversionImpossible();
    return static_cast<float>(this->value);  
}

const char  *Convert::InvalidParameter::what(void) const throw()
{
    return "\n\033[1;31m\t\t\t --- ERROR ---\033[0m\n\n\033[3;33mProgramm take a single string as parameter with printables characters only\033[0m\n";
}

const char  *Convert::NonDisplayable::what(void) const throw()
{
    return "Non displayable";
}

const char  *Convert::ConversionImpossible::what(void) const throw()
{
    return "impossible";
}

std::ostream    &operator<<(std::ostream &o, Convert const &conv)
{
    o << "char: ";
    try
    {
        o << conv.convertToChar() << "\n";
    }
    catch(const std::exception& e)
    {
        o << e.what() << "\n";
    }
    o << "int: ";
    try
    {
        o << conv.convertToInt() << "\n";
    }
    catch(const std::exception& e)
    {
        o << e.what() << "\n";
    }
    o << "float: ";
    try
    {
        float f = conv.convertToFloat();
        if (f == std::numeric_limits<float>::infinity())
            o << "+ ";
        o << f;
        if (f == std::numeric_limits<float>::infinity()
        || f == -std::numeric_limits<float>::infinity()
        || f == std::numeric_limits<float>::NaN())
            o << "f";
        o << "\n";
    }
    catch(const std::exception& e)
    {
        o << e.what() << "\n";
    }
    o << "double: ";
    double d = conv.getDoubleValue();
    if (d == std::numeric_limits<double>::infinity())
        o << "+ ";
    o << d << "\n";
    return o;
}