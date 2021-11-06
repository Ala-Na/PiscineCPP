/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:46:14 by anadege           #+#    #+#             */
/*   Updated: 2021/11/06 17:25:28 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include <string>

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
