/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:51:55 by anadege           #+#    #+#             */
/*   Updated: 2021/11/07 21:57:30 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"

int	main()
{
	Karen	karen;
	std::string	level[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "NADA"};

	for (int i = 0; i < 5; i++)
	{
		if (i != 0)
			std::cout << std::endl;
		std::cout << "Testing level " << level[i] << " on Karen" << std::endl;
		std::cout << "=> ";
		karen.complain(level[i]);
	}
	return 0;
}
