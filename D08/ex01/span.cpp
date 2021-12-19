/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:42:36 by anadege           #+#    #+#             */
/*   Updated: 2021/12/19 15:43:45 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>

Span::Span(void) : span(), len(0) {};

Span::Span(std::size_t const &len) : len(len)
{
    std::set<int>   span;
    this->span = span;
}

Span::Span(Span const &src) : len(src.len)
{
    std::set<int>   span(src.span);
    this->span = span;
}

Span::~Span(void) {};

Span    &Span::operator=(Span const &other)
{
    this->len = other.len;
    this->span.clear();
    std::set<int> span(other.span);
    this->span = span;
    return *this;
}

void    Span::addNumber(int item)
{
    if (this->span.empty() == false && this->span.size() == this->len)
        throw IsFullException();
    if (this->span.find(item) != this->span.end())
        throw AlreadyPresentException();
    this->span.insert(item);
}

void    Span::addNumber(int start, int end)
{
    for (int i = start; i <= end; i++)
        addNumber(i);
}

void    Span::showContent(void)
{
    for (std::set<int>::iterator it = this->span.begin(); it != this->span.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

int    Span::shortestSpan(void)
{
    int    short_span;
        
    if (this->span.size() <= 1)
        throw ImpossibleSpanException();
    short_span = 0;
    for (std::set<int>::iterator it = this->span.begin()++; it != this->span.end(); ++it)
    {
        std::set<int>::iterator closest = this->span.upper_bound(*it);
        if (short_span == 0 || ((*closest - *it) > 0 && short_span > (*closest - *it)))
            short_span = (*closest - *it);
    }
    return short_span;
}

unsigned int    Span::longestSpan(void)
{
    if (this->span.size() <= 1)
        throw ImpossibleSpanException();
    return *this->span.rbegin() - *this->span.begin();
}

const char  *Span::IsFullException::what(void) const throw()
{
    return "Can't add new value: Span object is already full!";
}

const char  *Span::ImpossibleSpanException::what(void) const throw()
{
    return "Can't find any span: Span object doesn't have enought items!";
}

const char  *Span::AlreadyPresentException::what(void) const throw()
{
    return "Can't add new value : Already present in Span object!";
}