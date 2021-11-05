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
}

Phonebook::~Phonebook(void)
{
	std::cout << "Exit phonebook and erase contacts." << std::endl;    
}

void    Phonebook::printInfoForSearch(std::string to_print)
{
    if (to_print.size() >= 10)
    {
        to_print = to_print.substr(0, 9);
        to_print = to_print.insert(9, ".");
    }
    std::cout << std::setw(10);
    std::cout << to_print;
}

int     Phonebook::getFirstEmptyContactIndex(void)
{
    for (int i = 0; i < 8; i++)
    {
        if (contacts[i].getFirstName().empty())
            return i;
    }
    return -1;
}

void    Phonebook::addContact(void)
{
    int i;

    i = getFirstEmptyContactIndex();
	if (i == -1)
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

int Phonebook::getIndexFromInput(std::string input)
{
    int index;

    if (input.empty() || input.size() > 1 || input[0] <= '0' || input[0] > '8')
        return -1;
    index = std::atoi(input.c_str()) - 1;
    if (contacts[index].getFirstName().empty())
        return -1;
    return index;
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
    std::string    input;
    int            index;

    do {
        std::cout << "Enter index of contact you wish to see : ";
		std::getline(std::cin, input);
        index = getIndexFromInput(input);
        if (index == -1)
            std::cout << "Invalid index. Please, retry." << std::endl;
    } while (index == -1);
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
    
    nbr_contacts_filled = getFirstEmptyContactIndex();
    if (nbr_contacts_filled == 0)
    {
        std::cout << "Phonebook is empty. Nothing to search." << std::endl;
        return ;
    }
    std::cout << "  index   |first name|last  name| nickname " << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    for (int index = 0; !contacts[index].getFirstName().empty(); index++)
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
