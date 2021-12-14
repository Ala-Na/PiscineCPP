/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadege <anadege@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:28:37 by anadege           #+#    #+#             */
/*   Updated: 2021/12/14 18:55:40 by anadege          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

#include <iostream>

int main()
{
    Data *data;
    Data *deser;
    uintptr_t ser;

    data = new Data;
    data->i = 42;
    data->f = 42.42f;
    data->d = 42.42;
    data->c = '*';
    data->s = "Ceci est un test";

    std::cout << "Content of data before serialization:" << std::endl;
    std::cout << "int: " << data->i << std::endl;
    std::cout << "float: " << data->f << std::endl;
    std::cout << "double: " << data->d << std::endl;
    std::cout << "char: " << data->c << std::endl;
    std::cout << "string: " << data->s << "\n" << std::endl;

    ser = serialize(data);
    deser = deserialize(ser);
    
    std::cout << "Content of data after serialization?deserialization:" << std::endl;
    std::cout << "int: " << deser->i << std::endl;
    std::cout << "float: " << deser->f << std::endl;
    std::cout << "double: " << deser->d << std::endl;
    std::cout << "char: " << deser->c << std::endl;
    std::cout << "string: " << deser->s << "\n" << std::endl;

    delete data;

    return 0;
}