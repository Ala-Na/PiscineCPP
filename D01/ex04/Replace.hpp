/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:50:18 by anadege           #+#    #+#             */
/*   Updated: 2021/11/07 20:57:24 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __REPLACE_H__
# define __REPLACE_H__

# include <string>
# include <cstring>
# include <iostream>
# include <fstream>

class Replace
{
public:
	Replace(const char *filename, const char *str1, const char *str2);
	~Replace(void);
	bool	checkArguments(void);
	bool	openInputFile(void);
	bool	openOutputFile(void);
	bool	replaceContent(void);

private:
	std::string		input_filename;
	std::string		output_filename;
	std::string		s1;
	std::string		s2;
	std::ifstream	ifs;
	std::ofstream	ofs;
	void	displayErrorMessage(std::string filename);
};

#endif
