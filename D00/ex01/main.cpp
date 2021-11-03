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

# include "Contact_class.hpp"
# include "Phonebook_class.hpp"

int	main()
{
	Phonebook	phonebook(8);
	std::string	input;

	while (1)
	{
		phonebook.displayMenu();
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
			addContact()
		else if (!input.compare("SEARCH"))
			searchContactMenu();
		else if (!input.compare("EXIT"))
			break ;
		else
		{
			std::cout << "Input not corresponding to any option. Retry." << std::endl;
		}
	}
	std::cout << "Exit phonebook and erase contacts." << std::endl;
	return (0);
}
