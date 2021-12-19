/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:25:59 by anadege           #+#    #+#             */
/*   Updated: 2021/12/19 15:43:52 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int main()
{
    std::cout << "\033[0;35m---> Test in main\033[0m" << std::endl;
    Span sp1 = Span(5);
    sp1.addNumber(5);
    sp1.addNumber(3);
    sp1.addNumber(17);
    sp1.addNumber(9);
    sp1.addNumber(11);
    std::cout << "Content: ";
    sp1.showContent();
    std::cout << "Shortest span: " << sp1.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp1.longestSpan() << std::endl;
    std::cout << std::endl;

    std::cout << "\033[0;35m---> Test for 1000 elements\033[0m" << std::endl;
    Span sp2 = Span(1000);
    sp2.addNumber(0, 999);
    std::cout << "Content: ";
    sp2.showContent();
    std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
    std::cout << std::endl;

    std::cout << "\033[0;35m---> Another short test\033[0m" << std::endl;
    Span sp3 = Span(3);
    sp3.addNumber(0);
    sp3.addNumber(5);
    sp3.addNumber(10);
    std::cout << "Content: ";
    sp3.showContent();
    std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
    std::cout << std::endl;

    std::cout << "\033[0;35m---> Check of error 1\033[0m" << std::endl;
    Span sp4 = Span(2);
    try
    {
        sp4.addNumber(0);
        sp4.addNumber(5);
        sp4.addNumber(10);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "Content: ";
        sp4.showContent();
        std::cout << "Shortest span: " << sp4.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp4.longestSpan() << std::endl;
        std::cout << std::endl;
    }
    
    std::cout << "\033[0;35m---> Check of error 2\033[0m" << std::endl;
    Span sp5 = Span(1000);
    try
    {
        sp5.addNumber(0, 1000);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "Content: ";
        sp5.showContent();
        std::cout << "Shortest span: " << sp5.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp5.longestSpan() << std::endl;
        std::cout << std::endl;
    }

    std::cout << "\033[0;35m---> Check of error 3\033[0m" << std::endl;
    Span sp6 = Span(1000);
    try
    {
        sp6.addNumber(0);
        std::cout << "Content: ";
        sp6.showContent();
        std::cout << "Shortest span: " << sp6.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "Longest span: " << sp6.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << std::endl;
    }
    
    std::cout << "\033[0;35m---> Check of error 4 (only considered an error because a Set object is used)\033[0m" << std::endl;
    Span sp7 = Span(1000);
    try
    {
        sp7.addNumber(0);
        sp7.addNumber(0);
    }
    catch(const std::exception& e)
    {
        std::cout << "Content: ";
        sp7.showContent();
        std::cerr << e.what() << '\n';
    }
}