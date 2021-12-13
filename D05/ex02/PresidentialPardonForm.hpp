/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:52:08 by anadege           #+#    #+#             */
/*   Updated: 2021/12/13 14:24:55 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_HPP__
#define __PRESIDENTIALPARDONFORM_HPP__

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(PresidentialPardonForm const &src);
        ~PresidentialPardonForm(void);
        
        PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

        void    action(std::string &target) const;
        virtual void    execute(Bureaucrat const &executor) const;
};

#endif