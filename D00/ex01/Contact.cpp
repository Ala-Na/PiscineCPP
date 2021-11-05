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

#include "Contact.hpp"

Contact::Contact(void)
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

bool	Contact::checkValidName(std::string & to_check)
{
	for (std::string::size_t i = 0; i < to_check.size(); i++)
	{
		if ((!isalpha(to_check[i]) && to_check[i] != ' ') || (i == 0 && to_check[i] == ' '))
		{
			std::cout << to_check;
			std::cout << ": not a valid name (only alphabetics characters and spaces)." << std::endl;
			std::cout << "Please retry." << std::endl;
			return false;
		}
		i++;
	}
	return true;
}

bool	Contact::checkValidPhoneNumber(std::string & to_check)
{
	for (std::string::size_t i = 0; i < to_check.size(); i++)
	{
		if (!isdigit(to_check[i]) || (i == 0 && to_check[i] != '0'))
		{
			std::cout << to_check;
			std::cout << ": not a valid phone number (only 10 digits characters, starting with 0)." << std::endl;
			std::cout << "Please retry." << std::endl;
			return false;
		}
	}
	return true;
}

void	Contact::setFirstName(void)
{
	do {
		std::cout << "Enter first name :" <<std::endl;
		std::getline(std::cin, first_name);
	} while (first_name.empty() || checkValidName(first_name) == false);
}

void	Contact::setLastName(void)
{
	do {
		std::cout << "Enter last name :" <<std::endl;
		std::getline(std::cin, last_name);
	} while (last_name.empty() || checkValidName(last_name) == false);
}

void	Contact::setNickname(void)
{
	do {
		std::cout << "Enter nickname :" <<std::endl;
		std::getline(std::cin, nickname);
	} while (nickname.empty());
}

void	Contact::setPhoneNumber(void)
{
	do {
		std::cout << "Enter phone number :" <<std::endl;
		std::getline(std::cin, phone_number);
	} while (phone_number.empty() || checkValidPhoneNumber(phone_number) == false);
}

void	Contact::setDarkestSecret(void)
{
	do {
		std::cout << "Enter darkest_secret :" <<std::endl;
		std::getline(std::cin, darkest_secret);
	} while (darkest_secret.empty());
}

std::string	Contact::getFirstName(void) const
{
	return (&first_name);
}

std::string	Contact::getLastName(void) const
{
	return (&last_name);
}

std::string	Contact::getNickname (void) const
{
	return (&nickname);
}

std::string	Contact::getPhoneNumber (void) const
{
	return (&phone_number);
}

std::string	Contact::getDarkestSecret (void) const
{
	return (&darkest_secret);
}
