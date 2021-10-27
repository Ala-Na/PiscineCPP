/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:02:47 by anadege           #+#    #+#             */
/*   Updated: 2021/10/27 18:07:02 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	ft_upper_char(char c)
{
	return ((c >= 97 && c <= 122) ? c - 32 : c); 
}

char	*ft_upper_str(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
		str[i] = ft_upper_char(str[i]);
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEAREABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i  = 1; i < argc; i++)
			std::cout << ft_upper_str(argv[i]);
		std::cout << std::endl;
	}
	return (0);
}
