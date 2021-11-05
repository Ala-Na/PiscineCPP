/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 20:04:48 by anadege           #+#    #+#             */
/*   Updated: 2021/11/02 22:25:50 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>
# include <string>

class Contact {

public:
// Constructor
	Contact(void);
// NOTE : Destructor not used so not declared

// Set functions
	void	setFirstName(void);
	void	setLastName(void);
	void	setNickname(void);
	void	setPhoneNumber(void);
	void	setDarkestSecret(void);

// Utils functions
	bool	checkValidName(std::string & to_check);
	bool	checkValidPhoneNumber(std::string & to_check);

// Get functions
	std::string&	getFirstName(void);
	std::string&	getLastName(void);
	std::string&	getNickname(void);
	std::string&	getPhoneNumber(void);
	std::string&	getDarkestSecret(void);

private:
// Infos
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

};

#endif
