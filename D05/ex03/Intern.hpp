/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:30:47 by anadege           #+#    #+#             */
/*   Updated: 2021/12/13 18:15:45 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include "Form.hpp"

class Intern
{
    public:
        Intern(void);
        Intern(Intern const &src);
        ~Intern(void);
        
        Intern  &operator=(Intern const &other);

        Form    *makeForm(const char *type, const char *target);

        class   FormDoesntExistsException : public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };
};

#endif