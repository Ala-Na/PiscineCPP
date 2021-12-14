/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:36:07 by anadege           #+#    #+#             */
/*   Updated: 2021/12/14 16:06:19 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERT_HPP__
#define __CONVERT_HPP__

#include <string>
#include <iostream>

class Convert
{
    public:
        Convert(void);
        Convert(char const *param);
        Convert(Convert const &src);
        ~Convert(void);

        Convert &operator=(Convert const &other);

        double const    &getDoubleValue(void) const;
        char            convertToChar(void) const;
        int             convertToInt(void) const;
        float           convertToFloat(void) const;

        class   InvalidParameter : public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };
        class   NonDisplayable : public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };
        class   ConversionImpossible : public std::exception {
            public:
                virtual const char  *what(void) const throw();
        };

    private:
        double    value;    
        bool      checkValidDouble(std::string param) const;      
};

std::ostream &operator<<(std::ostream &o, Convert const &conv);

#endif