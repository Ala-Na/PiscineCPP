/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:31:52 by anadege           #+#    #+#             */
/*   Updated: 2021/11/07 22:32:57 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
	std::cout << "You don’t put enough!" << std::endl;
	std::cout << "If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

int	Karen::getSwitchValue(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(levels[i]))
			return (i);
	}
	return (-1);
}

void	Karen::getUpgradingLevelInfo(int start)
{
	void	(Karen::*pmf[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	for (int i = start; i < 4; i++)
	{
		std::cout << "[" << levels[i] << "]" << std::endl;
		(this->*pmf[i])();
		if (i != 3)
			std::cout << std::endl;
	}
}

void	Karen::filter(std::string level)
{

	switch(getSwitchValue(level))
	{
		case 0:
			getUpgradingLevelInfo(0);
			break ;
		case 1:
			getUpgradingLevelInfo(1);
			break ;
		case 2:
			getUpgradingLevelInfo(2);
			break ;
		case 3:
			getUpgradingLevelInfo(3);
			break ;
		default:
			std::cout << "[" << "Probably complaining about unsignificant problems" << "]" << std::endl;
			break ;
	}
}
