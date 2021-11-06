/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:27:08 by anadege           #+#    #+#             */
/*   Updated: 2021/11/06 17:35:38 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::cout << "String \"" << string << "\" created\n" << std::endl;

	std::string*	stringPTR = &string;
	std::string&	stringREF = string;
	std::cout << "stringPTR and stringREF created\n" << std::endl;

	std::cout << "string address by stringPTR is " << stringPTR << "\n" << std::endl;
	std::cout << "string address by stringREF is " << &stringREF << "\n" << std::endl;

	std::cout << "string content by stringPTR is \"" << *stringPTR << "\"\n" << std::endl;
	std::cout << "string content by stringREF is \"" << stringREF << "\"\n" << std::endl;

	std::cout << "End of exercice" << std::endl;
	return 0;
}
