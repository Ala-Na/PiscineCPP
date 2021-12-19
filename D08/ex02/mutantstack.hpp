/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:47:13 by anadege           #+#    #+#             */
/*   Updated: 2021/12/19 15:47:13 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

#include <algorithm>
#include <iterator>
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        MutantStack(void) : std::stack<T, Container>() {};
        MutantStack(MutantStack const &src) : std::stack<T, Container>(src) {};
        virtual ~MutantStack(void) {};

        MutantStack &operator=(MutantStack const &other) {
            std::stack<T, Container>::operator=(other);
            return *this;
        };

        typedef typename    Container::iterator iterator;
        typedef typename    Container::const_iterator const_iterator;
        typedef typename    Container::reverse_iterator reverse_iterator;
        typedef typename    Container::const_reverse_iterator const_reverse_iterator;

        iterator        begin() {return this->c.begin();};
        const_iterator  begin() const {return this->c.begin();};
        iterator        end() {return this->c.end();};
        const_iterator  end() const {return this->c.end();};

        reverse_iterator        rbegin() {return this->c.rbegin();};
        const_reverse_iterator  rbegin() const {return this->c.rbegin();};
        reverse_iterator        rend() {return this->c.rend();};
        const_reverse_iterator  rend() const {return this->c.rend();};   
};

#endif