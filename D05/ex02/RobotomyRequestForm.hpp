/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:21:57 by anadege           #+#    #+#             */
/*   Updated: 2021/12/13 14:23:30 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_HPP__
#define __ROBOTOMYREQUESTFORM_HPP__

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(RobotomyRequestForm const &src);
        ~RobotomyRequestForm(void);
        
        RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

        void    action(std::string &target)const;
        virtual void    execute(Bureaucrat const &executor) const;
};

#endif