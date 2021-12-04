/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:51:00 by anadege           #+#    #+#             */
/*   Updated: 2021/12/04 23:12:32 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
#include <iostream>

Brain::Brain(void)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "empty";
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(std::string ideas[100])
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = ideas[i];
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
    *this = src;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain   &Brain::operator=(Brain const &other)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.getOneIdea(i);
    return *this;
}

void    Brain::setOneIdea(int index, std::string value)
{
    this->ideas[index] = value;
}

std::string Brain::getOneIdea(int index) const
{
    return this->ideas[index];
}

void    Brain::setIdeas(std::string value)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = value;
}

void    Brain::showIdeas(void) const
{
    for (int i = 0; i < 100; i++)
        std::cout << this->getOneIdea(i);
    std::cout << std::endl;
}