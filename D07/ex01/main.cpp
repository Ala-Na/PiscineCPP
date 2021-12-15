/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:30:20 by anadege           #+#    #+#             */
/*   Updated: 2021/12/15 12:33:30 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <iostream>


int main()
{
    int a[5] = {0, 1, 2, 3, 4};
    for (int i = 0; i < 5; i++)
        std::cout << a;
    std::cout << "\n---> After iter" << std::endl;
    
}