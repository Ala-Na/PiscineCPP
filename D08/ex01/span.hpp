/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:42:39 by anadege           #+#    #+#             */
/*   Updated: 2021/12/17 17:38:25 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <set>
#include <iostream>

class Span
{
    public:
        Span(std::size_t const &len);
        Span(Span const &src);
        ~Span(void);

        Span    &operator=(Span const &other);
        
        void            addNumber(int item);
        void            addNumber(int start, int end);
        void            showContent(void);
        int             shortestSpan(void);
        unsigned int    longestSpan(void);

        class   IsFullException : public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };
        class   ImpossibleSpanException : public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };
        class   AlreadyPresentException : public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };

    private:
        Span(void);
        
        std::set<int>       span;
        std::size_t         len;
};

std::ostream    &operator<<(std::ostream &o, Span const &span);

#endif