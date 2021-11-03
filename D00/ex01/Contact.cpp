/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 22:17:24 by anadege           #+#    #+#             */
/*   Updated: 2021/11/02 22:30:06 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact_class.hpp"

Contact::Contact(void)
{
	_first_name = "";
	_last_name = "";
	_nickname = "";
	_phone_number = "";
	_darkest_secret = "";
	return ;
}

Contact::~Contact(void)
{
	return ;
}

bool	Contact::checkValidName(std::string to_check)
{
	int	i;

	while (to_check[i])
	{
		if (!isalpha(to_check[i]) || (i == 0 && to_check[i] == ' '))
		{
			std::cout << to_check;
			std::cout << ": not a valid name (only alphabetics characters and spaces)." << std::endl;
			std::cout << "Please retry." << std::endl;
			return (false);
		}
		i++;
	}
	return (true);
}

bool	Contact::checkValidPhoneNumber(std::string to_check)
{
	int	i;

	while (to_check[i])
	{
		if (!isdigit(to_check[i] || (i == 0 && to_check[i] != '0'))
		{
			std::cout << to_check;
			std::cout << ": not a valid phone number (only 10 digits characters, starting with 0)." << std::endl;
			std::cout << "Please retry." << std::endl;
			return (false);
		}
		i++;
	}
	return (true);
}

bool	Contact::checkContactIsEmpty(void)
{
	std::string const	checkFirstName;

	checkFirstName = getFirstName();
	if (checkFirstName.isempty())
		return (false);
	return (true);
}

void	Contact::setFirstName(void)
{
	std::string first_name;

	do {
		std::cout << "Enter first name :" <<std:endl;
		std::getline(td::cin, first_name);
	} while (first_name.isempty() || checkValidName(first_name) == false);
	_first_name = first_name;
	return ;
}

void	Contact::setLastName(std::string last_name)
{
	std::string last_name;

	do {
		std::cout << "Enter last name :" <<std:endl;
		std::getline(td::cin, last_name);
	} while (last_name.isempty() || checkValidName(last_name) == false);
	_last_name = last_name;
	return ;
}

void	Contact::setNickname(void)
{
	std::string nickname;

	do {
		std::cout << "Enter nickname :" <<std:endl;
		std::getline(td::cin, nickname);
	} while (nickname.isempty());
	_nickname = nickname;
	return ;
}

void	Contact::setPhoneNumber(void)
{
	std::string phone_number;

	do {
		std::cout << "Enter phone number :" <<std:endl;
		std::getline(td::cin, phone_number);
	} while (phone_number.isempty() || checkValidPhoneNumber(phone_number) == false);
	_phone_number = phone_number;
	return ;
}

void	Contact::setDarkestSecret(void)
{
	std::string darkest_secret;

	do {
		std::cout << "Enter darkest_secret :" <<std:endl;
		std::getline(td::cin, darkest_secret);
	} while (first_name.isempty());
	_nickname = nickname;
}

std::string	Contact::getFirstName(void) const
{
	return (_first_name);
}

std::string	Contact::getLastName(void) const
{
	return (_last_name);
}

std::string	Contact::getNickname (void) const
{
	return (_nickname);
}

std::string	Contact::getPhoneNumber (void) const
{
	return (_phone_number);
}

std::string	Contact::getDarkestSecret (void) const
{
	return (_darkest_secret);
}
