/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
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
}

Contact::~Contact(void)
{
}

void	Contact::setFirstName(std::string first_name)
{
	_first_name = first_name;
}

void	Contact::setLastName(std::string last_name)
{
	_last_name = last_name;
}

void	Contact::setNickname(std::string nickname)
{
	_nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phone_number)
{
	_phone_number = phone_number;
}

void	Contact::setDarkestSecret(std::string darkest_secret)
{
	_darkest_secret = darkest_secret;
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
