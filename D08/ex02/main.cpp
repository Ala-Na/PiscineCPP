/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 16:37:03 by anadege           #+#    #+#             */
/*   Updated: 2021/12/19 16:37:03 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>
#include <iostream>

int main()
{
    std::cout << "\033[0;35m---> Let's study MutantStack behaviour\n\033[0m" << std::endl;
    MutantStack<int> mstack;
    std::cout << "\033[0;33mPushing 5 on MutantStack\033[0m" << std::endl;    
    mstack.push(5);
    std::cout << "\033[0;33mPushing 17 on MutantStack\033[0m" << std::endl; 
    mstack.push(17);
    std::cout << "\033[0;32mOn top of MutantStack: \033[0m" << mstack.top() << std::endl;
    std::cout << "\033[0;33mPoping last number from MutantStack\033[0m" << std::endl; 
    mstack.pop();
    std::cout << "\033[0;32mSize of MutantStack: \033[0m" << mstack.size() << std::endl;
    std::cout << "\033[0;33mPushing 3 on MutantStack\033[0m" << std::endl; 
    mstack.push(3);
    std::cout << "\033[0;33mPushing 5 on MutantStack\033[0m" << std::endl; 
    mstack.push(5);
    std::cout << "\033[0;33mPushing 737 on MutantStack\033[0m" << std::endl; 
    mstack.push(737);
    std::cout << "\033[0;33mPushing 0 on MutantStack\033[0m" << std::endl; 
    mstack.push(0);
    std::cout << "\033[0;32mCheck if empty MutantStack: \033[0m" << mstack.empty() << " (0 == false)" << std::endl;
    std::cout << "\033[0;32mIterating MutantStack: \033[0m";
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << "\n" << std::endl;

    std::cout << "\033[0;35m---> Checking copy constructor by iterating: \033[0m" << std::endl;    
    MutantStack<int> s(mstack);
    MutantStack<int>::iterator it1 = s.begin();
    MutantStack<int>::iterator ite1 = s.end();
    ++it1;
    --it1;
    while (it1 != ite1)
    {
        std::cout << *it1 << " ";
        ++it1;
    }
    std::cout << "\n" << std::endl;
   
    std::cout << "\033[0;35m---> Example of list behaviour for comparison\n\033[0m" << std::endl;
    std::list<int> lst;
    std::cout << "\033[0;33mPushing 5 on list\033[0m" << std::endl;    
    lst.push_back(5);
    std::cout << "\033[0;33mPushing 17 on list\033[0m" << std::endl; 
    lst.push_back(17);
    std::cout << "\033[0;32mOn top of list: \033[0m" << lst.back() << std::endl;
    std::cout << "\033[0;33mPoping last number from list\033[0m" << std::endl; 
    lst.pop_back();
    std::cout << "\033[0;32mSize of list: \033[0m" << lst.size() << std::endl;
    std::cout << "\033[0;33mPushing 3 on list\033[0m" << std::endl; 
    lst.push_back(3);
    std::cout << "\033[0;33mPushing 5 on list\033[0m" << std::endl; 
    lst.push_back(5);
    std::cout << "\033[0;33mPushing 737 on list\033[0m" << std::endl; 
    lst.push_back(737);
    std::cout << "\033[0;33mPushing 0 on list\033[0m" << std::endl; 
    lst.push_back(0);
    std::cout << "\033[0;32mCheck if empty list: \033[0m" << lst.empty() << " (0 == false)" << std::endl;
    std::cout << "\033[0;32mIterating list: \033[0m";
    std::list<int>::iterator it2 = lst.begin();
    std::list<int>::iterator ite2 = lst.end();
    ++it2;
    --it2;
    while (it2 != ite2)
    {
        std::cout << *it2 << " ";
        ++it2;
    }
    std::cout << std::endl;

    return 0;
}