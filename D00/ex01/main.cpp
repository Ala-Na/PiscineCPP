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
# include "Phonebook.hpp"

int main()
{
    Phonebook phonebook;
	std::string	input;

	while (1)
	{
		phonebook.displayMenu();
		std::getline(std::cin, input);
		std::cout << std::endl;
		if (!input.compare("ADD"))
			phonebook.addContact();
		else if (!input.compare("SEARCH"))
			phonebook.searchContactMenu();
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
	return 0;
}
