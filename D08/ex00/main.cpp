/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:08:02 by anadege           #+#    #+#             */
/*   Updated: 2021/12/16 15:56:36 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <stack>

void    print(int elem)
{
    std::cout << elem << " ";
}

int main()
{
    std::cout << "\033[0;35m---> Test for vector\033[0m" << std::endl;
    std::vector<int> vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    std::cout << "Content: ";
    for_each(vect.begin(), vect.end(), print);
    std::cout << std::endl;
    try
    {
        std::vector<int>::iterator it = easyfind(vect, 2);
        std::cout << *it << ": \033[0;32mValue found in container\033[0m" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "5: \033[0;31m" << e.what() << "\033[0m" << std::endl;
    }
    try
    {
        std::vector<int>::iterator it = easyfind(vect, 5);
        std::cout << *it << ": \033[0;32mValue found in container\033[0m" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "5: \033[0;31m" << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\n\033[0;35m---> Test for list\033[0m" << std::endl;
    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    std::cout << "Content: ";
    for_each(lst.begin(), lst.end(), print);
    std::cout << std::endl;
    try
    {
        std::list<int>::iterator it = easyfind(lst, 2);
        std::cout << *it << ": \033[0;32mValue found in container\033[0m" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "5: \033[0;31m" << e.what() << "\033[0m" << std::endl;
    }
    try
    {
        std::list<int>::iterator it = easyfind(lst, 5);
        std::cout << *it << ": \033[0;32mValue found in container\033[0m" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "5: \033[0;31m" << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\n\033[0;35m---> Test for deque\033[0m" << std::endl;
    std::deque<int> dqu;
    dqu.push_back(1);
    dqu.push_back(2);
    dqu.push_back(3);
    std::cout << "Content: ";
    for_each(dqu.begin(), dqu.end(), print);
    std::cout << std::endl;
    try
    {
        std::deque<int>::iterator it = easyfind(dqu, 2);
        std::cout << *it << ": \033[0;32mValue found in container\033[0m" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "5: \033[0;31m" << e.what() << "\033[0m" << std::endl;
    }
    try
    {
        std::deque<int>::iterator it = easyfind(dqu, 5);
        std::cout << *it << ": \033[0;32mValue found in container\033[0m" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "5: \033[0;31m" << e.what() << "\033[0m" << std::endl;
    }

    return 0;
}