/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:08:47 by anadege           #+#    #+#             */
/*   Updated: 2021/11/05 15:08:49 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include "Contact.hpp"

class Phonebook {

public:
    Phonebook(void);
    ~Phonebook(void);
    void    displayMenu(void);
    void    addContact(void);
    void    searchContactMenu(void);

private:
    void    searchSpecificContact(void);
    void    printInfoForSearch(std::string to_print);
    int     getFirstEmptyContactIndex(void);
    int     getIndexFromInput(std::string input);
    Contact contacts[8];
};

#endif
