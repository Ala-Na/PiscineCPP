/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 20:04:48 by anadege           #+#    #+#             */
/*   Updated: 2021/11/02 22:25:50 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact {

public:
// Constructors and destructors
	Contact(void);
	~Contact(void);

// Set functions
	void	setFirstName(void);
	void	setLastName(void);
	void	setNickname(void);
	void	setPhoneNumber(void);
	void	setDarkestSecret(void);

// Utils functions
	bool	checkValidName(std::string to_check);
	bool	checkValidPhoneNumber(std::string to_check);
	bool	checkContactIsEmpty(void);

// Get functions
	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickname(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getDarkestSecret(void) const;

private:
// Infos
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;

};

#endif
