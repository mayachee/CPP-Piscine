/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:44:19 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/10 21:13:48 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char* av[])
{
    // float f = -42.f;
    // char c = f;
    // double d = f;
    // int i = f;
    // std::cout << f << std::endl;
    // std::cout << c << std::endl;
    // std::cout << d << std::endl;
    // std::cout << i << std::endl;
    if (ac < 2) {
        std::cerr << "Usage: " << av[0] << " <literal>" << std::endl;
        return 1;
    }

    ScalarConverter::convert(av[1]);
    return 0;  
}

