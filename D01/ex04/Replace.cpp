/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:22:07 by anadege           #+#    #+#             */
/*   Updated: 2021/11/07 21:05:26 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

Replace::Replace(const char *filename, const char *str1, const char *str2)
{
	input_filename.assign(filename);
	output_filename.assign(filename).append(".replace");
	s1.assign(str1);
	s2.assign(str2);
}

Replace::~Replace(void)
{
	if (ifs.is_open())
		ifs.close();
	if (ofs.is_open())
		ofs.close();
}

bool	Replace::checkArguments(void)
{
	if (input_filename.empty() || s1.empty() || s2.empty())
	{
		std::cout << "Arguments can't be empty !" << std::endl;
		return false;
	}
	return true;
}

void	Replace::displayErrorMessage(std::string filename)
{
	std::cerr << filename << ": " << std::strerror(errno) << std::endl;
}

bool	Replace::openInputFile(void)
{
	ifs.open(input_filename);
	if (ifs.fail())
	{
		displayErrorMessage(input_filename);
		return false;
	}
	return true;
}

bool	Replace::openOutputFile(void)
{
	ofs.open(output_filename);
	if (ofs.fail())
	{
		displayErrorMessage(output_filename);
		return false;
	}
	return true;
}

bool	Replace::replaceContent(void)
{
	std::string	line;

	while (std::getline(ifs, line))
	{
		for (size_t found = line.find(s1); found != std::string::npos; found = line.find(s1))
		{
			line.erase(found, s1.length());
			line.insert(found, s2);
		}
		ofs << line << std::endl;
	}
	return true;
}
