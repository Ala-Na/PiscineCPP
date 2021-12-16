/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:42:36 by anadege           #+#    #+#             */
/*   Updated: 2021/12/16 19:22:53 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>

Span::Span(void) : span(NULL), len(0) {};

Span::Span(unsigned int const &len) : len(len)
{
    std::set<int>   span;
    this->span = &span;
}

Span::Span(Span const &src) : len(src.len())
{
    std::set<int>   span(src->span);
    this->span = &span;
}

Span::~Span(void) {};

Span    &Span::operator=(Span const &other)
{
    this->len = src.len();
    *(this->span).clear();
    std::set<int> span(src->span);
    this->span = &span;
    
}

void    Span::addNumber(int item)
{
    if (*(this->span).size() == this->len)
        throw IsFullException();
    *(this->span).insert(item);
}

void    Span::addNumber(int start, int end)
{
    for (int i = start; i <= end; i++)
        addNumber(i);
}

unsigned int    Span::shortestSpan(void)
{
    unsigned int    short_span;
        
    if (*(this->span).size() <= 1)
        throw ImpossibleSpanException();
    short_span = *(this->span)[]
    for (int i = 0; i < *(this->span).size(); i++)
    {
        
    }
    
}



const char  *Span::IsFullException::what(void) const throw()
{
    return "Can't add new value: Span object is already full!";
}

const char  *Span::ImpossibleSpanException::what(void) const throw()
{
    return "Can't find any span: Span object doesn't have enought items!";
}