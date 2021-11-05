/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:08:56 by anadege           #+#    #+#             */
/*   Updated: 2021/11/05 15:09:03 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook(void)
{
    std::cout << "--------------------------" << std::endl;
    std::cout << "You entered your phonebook" << std::endl;
    std::cout << "--------------------------" << std::endl;
    Contact contacts[8];
}

Phonebook::~Phonebook(void)
{
	std::cout << "Exit phonebook and erase contacts." << std::endl;    
}

void    Phonebook::printInfoForSearch(std::string & to_print)
{
    if (to_print.size() >= 10)
    {
        to_print = to_print.substr(0, 9);
        to_print = to_print.insert(9, ".");
    }
    std::cout << std::setw(10);
    std::cout << to_print;
}

int     Phonebook::getFirstEmptyContact(void)
{
    int i;

    for (i = 0; i < 8; i++)
    {
        if (contacts[i].getFirstName().empty())
            break ;
    }
    return i;
}

void    Phonebook::addContact(void)
{
    int i;

    i = getFirstEmptyContact();
	if (i == 7 && !contacts[i].getFirstName().empty())
	{
		std::cout << "Contact list is full ! Can't add any contact." <<std::endl;
		return ;
	}
    contacts[i].setFirstName();
    contacts[i].setLastName();
    contacts[i].setNickname();
    contacts[i].setPhoneNumber();
    contacts[i].setDarkestSecret();
    std::cout << "New contact successfully added !" << std::endl;
}

void    Phonebook::displayMenu(void)
{
    std::cout << "What do you wish to do ?" << std::endl;
    std::cout << "Available options :" << std::endl;
    std::cout << "ADD : Add new contact (max of 8)" << std::endl;
    std::cout << "SEARCH : Display your contacts" << std::endl;
    std::cout << "EXIT : Exit phonebook (and erase contacts)" << std::endl;
	std::cout << "> ";
}

void    Phonebook::searchSpecificContact(void)
{
    int     index;

    do {
        std::cout << "Enter index of contact you wish to see : ";
        std::cin >> index;
        index -= 1;
        if (std::cin.fail() || index < 0 || index >= getFirstEmptyContact())
            std::cout << "Index is invalid, please retry." << std::endl;
        if (std::cin.fail())
        {
            index = -1;
            std::cin.clear();
            std::cin.ignore(526, '\n');
        }
    } while (std::cin.fail() || index < 0 || index >= getFirstEmptyContact());
    std::cin.ignore();
    std::cout << "-------------------------------------------" << std::endl;
	std::cout << "First name: ";
    std::cout << contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: ";
    std::cout << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: ";
    std::cout << contacts[index].getNickname() << std::endl;
	std::cout << "Phone number: ";
    std::cout << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret (shhhh): ";
    std::cout << contacts[index].getDarkestSecret() << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
}

void    Phonebook::searchContactMenu(void)
{
    int nbr_contacts_filled;
    
    nbr_contacts_filled = getFirstEmptyContact();
    if (nbr_contacts_filled == 0)
    {
        std::cout << "Phonebook is empty. Nothing to search." << std::endl;
        return ;
    }
    std::cout << "  index   |first name|last  name| nickname " << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    for (int index = 0; index < nbr_contacts_filled; index++)
    {
        std::cout << "         " << index + 1 << "|";
        printInfoForSearch(contacts[index].getFirstName());
        std::cout << "|";
        printInfoForSearch(contacts[index].getLastName());
        std::cout << "|";
        printInfoForSearch(contacts[index].getNickname());
		std::cout << std::endl;
    }
    searchSpecificContact();
}
