/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:37:50 by anadege           #+#    #+#             */
/*   Updated: 2021/11/07 20:56:52 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"
# include <fstream>
# include <string>
# include <iostream>
# include <cstring>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error in number of arguments !" << std::endl;
		return 1;
	}
	Replace	replace(argv[1], argv[2], argv[3]);
	if (!replace.checkArguments() || !replace.openInputFile()
			|| !replace.openOutputFile() || !replace.replaceContent())
		return 1;
	return 0;
}
