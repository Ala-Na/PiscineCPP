/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:35:18 by anadege           #+#    #+#             */
/*   Updated: 2021/11/02 22:12:22 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <vector>
# include "Contact_class.hpp"

class Phonebook {

public:
	Phonebook(void);
	~Phonebook(void);

//	Function for actions
	void	displayMenu(void);	
	void	addContact(std::vector<Contact> _contacts);
	void	searchContactMenu(std::vector<Contact> const& _contacts);
	void	searchSpecificContact(std::vector<Contact> const& _contacts, int nb_contacts_filled);
	void	exitPhonebook(void);

// Utils functions
	int		findNextEmptyContactIndex(std::vector<Contact> _contacts(_nbr_contacts));
	void	printInfoForSearch(std::string to_print);

private:
	int const	_nbr_contacts;
	std::vector<Contact> _contacts(_nbr_contacts);

};

#endif
