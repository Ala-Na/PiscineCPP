/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:47:22 by anadege           #+#    #+#             */
/*   Updated: 2021/12/13 12:10:03 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_HPP__
#define __SHRUBBERYCREATIONFORM_HPP__

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(ShrubberyCreationForm const &src);
        virtual ~ShrubberyCreationForm(void);

        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
        
        void    action(std::string &target);
};

#endif