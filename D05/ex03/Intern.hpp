/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:30:47 by anadege           #+#    #+#             */
/*   Updated: 2021/12/13 16:12:30 by anadege          ###   ########.fr       */
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

        Form    *makeForm(std::string &type, std::string &target);

        class   FormDoesntExistsException : public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };
};

#endif