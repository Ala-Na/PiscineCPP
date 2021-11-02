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

	void	DisplayMenu(void);
	void	AddContact(std::vector<Contact> _contacts);
	void	SearchContact(std::vector<Contact> const& _contacts);
	void	ExitPhonebook(void);

private:
	int const	_nbr_contacts = 8;
	std::vector<Contact> _contacts(_nbr_contacts);

};

#endif
