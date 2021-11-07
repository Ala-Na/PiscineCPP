/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:36:35 by anadege           #+#    #+#             */
/*   Updated: 2021/11/07 22:28:42 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __KAREN_H__
# define __KAREN_H__

# include <string>
# include <iostream>

class	Karen
{
public:
	Karen(void);
	int		getSwitchValue(std::string level);
	void	getUpgradingLevelInfo(int start);
	void	filter(std::string level);

private:
	std::string	levels[4];
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};

#endif
