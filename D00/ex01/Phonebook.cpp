/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:12:44 by anadege           #+#    #+#             */
/*   Updated: 2021/11/02 16:58:22 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact_class.hpp"

void    Phonebook::Phonebook(int nbr_contacts) : _nbr_contacts(nbr_contacts), _contacts(8)
{
    return ;
}

void    Phonebook::~Phonebook()
{
    return ;
}

int    Phonebook::findNextEmptyContactIndex(std::vector<Contact> _contacts(_nbr_contacts))
{
    int i;

    i = 0;
    while (i < _nbr_contacts)
    {
        if (_contacts[i].checkContactisEmpty() == true)
            return (i);
        i++;
    }
    return (-1);
}

void    printInfoForSearch(std::string to_print)
{
    if (to_print.size() >= 10)
    {
        to_print = to_print.substr(0, 10);
        to_print[9] = '.';
    }
    std::cout << std::setw(10);
    std::cout << to_print;
}

void    Phonebook::displayMenu(void)
{
    std::cout << "You entered your phonebook" << std:endl;
    std::cout << "What do you wish to do ?" << std:endl;
    std::cout << "Available options :" << std:endl;
    std::cout << "ADD : Add new contact (max of 8)" << std:endl;
    std::cout << "SEARCH : Display your contacts" << std:endl;
    std::cout << "EXIT : Exit phonebook (and erase contacts)" << std::endl;
}

void    Phonebook::addContact(std::vector<Contact> _contacts)
{
    int new_contact_index;

    new_contact_index = findNextEmptyContactIndex(_contacts);
    if (new_contact_index == -1)
    {
        std::cout << "Contact list is full ! Can't add any contact." <<std::endl;
        return ;
    }
    _contacts[i].setFirstName();
    _contacts[i].setLastName();
    _contacts[i].setNickname();
    _contacts[i].setPhoneNumber();
    _contacts[i].setDarkestSecret();
    std::cout << "New contact successfully added !" << std::endl;
    return ;
}

void    Phonebook::searchSpecificContact(std::vectir<Contact> const& _contacts, int nbr_contacts_filled)
{
    std::string s_index;
    int         i_index;

    do {
        std::cout << "Enter index of contact you wish to see :" << std::endl;
        std::cin << s_index;
        i_index = atoi(s_index) - 1;
        if (i_index < 0 || i_index >= nbr_contacts_filled)
        {
            std::cout << "Index is invalid or empty, please retry." << std::endl;
        }
    } while (i_index < 0 || i_index >= nbr_contacts_filled);
    std::cout << _contacts[i_index].getFirstName() << std::endl;
    std::cout << _contacts[i_index].getLastName() << std::endl;
    std::cout << _contacts[i_index].getNickname() << std::endl;
    std::cout << _contacts[i_index].getPhoneNumber() << std::endl;
    std::cout << _contacts[i_index].getDarkestSecret() << std::endl;
    return ;
}

void    Phonebook::searchContactMenu(std::vector<Contact> const& _contacts)
{
    int nb_contacts_filled;
    int index;
    
    nb_contacts_filled = findNextEmptyContactIndex(_contacts);
    if (nb_contacts_filled == 0)
    {
        std::cout << "Phonebook is empty. Nothing to search." << std::endl;
        return ;
    }
    std::cout << "  index  |first name|last  name| nickname " << std::endl;
    std::cout << "                                          " << std::endl;
    index = 0;
    while (index < nb_contacts_filled)
    {
        std::cout << "         " << index + 1 << "|";
        printInfoForSearch(_contacts[index].getFirstName());
        std::cout << "|";
        printInfoForSearch(_contacts[index].getLastName());
        std::cout << "|";
        printInfoForSearch(_contacts[index].getNickname());
        index++;
    }
    searchSpecificContact(_contacts, nbr_contacts_filled);
    return ;
}
