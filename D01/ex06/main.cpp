/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:51:55 by anadege           #+#    #+#             */
/*   Updated: 2021/11/07 22:30:04 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	karen;
	std::string	level;
	if (argc != 2)
	{
		std::cerr << "Error in arguments number !" << std::endl;
		return 1;
	}
	level = argv[1];
	karen.filter(level);
	return 0;
}
