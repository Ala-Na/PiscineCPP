/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:42:39 by anadege           #+#    #+#             */
/*   Updated: 2021/12/16 19:17:58 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <set>

class Span
{
    public:
        Span(unsigned int const &len);
        Span(Span const &src);
        ~Span(void);

        Span    &operator=(Span const &other);
        
        void            addNumber(int item);
        void            addNumber(int start, int end);
        unsigned int    shortestSpan(void);
        unsigned int    longestSpan(void);

        class   IsFullException : public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };
        class   ImpossibleSpanException : public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };

    private:
        Span(void);
        
        std::set<int>       *span;
        unsigned int const  len;
};

#endif