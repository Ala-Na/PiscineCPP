/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:50:11 by anadege           #+#    #+#             */
/*   Updated: 2021/12/04 23:11:47 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <string>

class Brain
{
    public:
        Brain(void);
        Brain(std::string ideas[100]);
        Brain(Brain const &src);
        ~Brain(void);

        Brain &operator=(Brain const &other);

        void            setOneIdea(int index, std::string value);
        std::string     getOneIdea(int index) const;
        void            setIdeas(std::string value);
        void            showIdeas(void) const; 
        
    private:
        std::string ideas[100];
};

#endif