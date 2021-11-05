/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 22:14:10 by anadege           #+#    #+#             */
/*   Updated: 2021/11/02 22:15:05 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

void    printInfoForSearch(std::string & to_print)
{
    if (to_print.size() >= 10)
    {
        to_print = to_print.substr(0, 9);
        to_print = to_print.insert(9, ".");
    }
    std::cout << std::setw(10);
    std::cout << to_print;
}

void    addContact(std::vector<Contact> & contacts)
{
    Contact	new_contact;

	if (contacts.size() >= 8)
	{
		std::cout << "Contact list is full ! Can't add any contact." <<std::endl;
		return ;
	}
    new_contact.setFirstName();
    new_contact.setLastName();
    new_contact.setNickname();
    new_contact.setPhoneNumber();
    new_contact.setDarkestSecret();
    std::cout << "New contact successfully added !" << std::endl;
	contacts.push_back(new_contact);
}

void    displayMenu(void)
{
    std::cout << "You entered your phonebook" << std::endl;
    std::cout << "What do you wish to do ?" << std::endl;
    std::cout << "Available options :" << std::endl;
    std::cout << "ADD : Add new contact (max of 8)" << std::endl;
    std::cout << "SEARCH : Display your contacts" << std::endl;
    std::cout << "EXIT : Exit phonebook (and erase contacts)" << std::endl;
	std::cout << "> ";
}

void    searchSpecificContact(const std::vector<Contact> & contacts, int & nbr_contacts_filled)
{
    int     i_index;

    do {
        std::cout << "Enter index of contact you wish to see :" << std::endl;
        std::cin >> i_index;
		std::cin.ignore();
        i_index -= 1;
        if (i_index < 0 || i_index >= nbr_contacts_filled)
        {
            std::cout << "Index is invalid or empty, please retry." << std::endl;
        }
    } while (i_index < 0 || i_index >= nbr_contacts_filled);
	std::cout << "First name: ";
    std::cout << contacts[i_index].getFirstName() << std::endl;
	std::cout << "Last name: ";
    std::cout << contacts[i_index].getLastName() << std::endl;
	std::cout << "Nickname: ";
    std::cout << contacts[i_index].getNickname() << std::endl;
	std::cout << "Phone number: ";
    std::cout << contacts[i_index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret (shhhh): ";
    std::cout << contacts[i_index].getDarkestSecret() << std::endl;
}

void    searchContactMenu(const std::vector<Contact> & contacts)
{
    int nbr_contacts_filled;
    
    nbr_contacts_filled = contacts.size();
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
    searchSpecificContact(contacts, nbr_contacts_filled);
}

int	main()
{
	std::vector<Contact> contacts;
	std::string	input;

	while (1)
	{
		displayMenu();
		std::getline(std::cin, input);
		std::cout << std::endl;
		if (!input.compare("ADD"))
			addContact(contacts);
		else if (!input.compare("SEARCH"))
			searchContactMenu(contacts);
		else if (!input.compare("EXIT"))
			break ;
		else
		{
			std::cout << "Input \"";
			std::cout << input;
			std::cout << "\" not corresponding to any option. Retry." << std::endl;
		}
		std::cout << std::endl;
	}
	std::cout << "Exit phonebook and erase contacts." << std::endl;
	return 0;
}
