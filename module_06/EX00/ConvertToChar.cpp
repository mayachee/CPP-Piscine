/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertToChar.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:30:09 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/07 16:49:47 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvertToChar.hpp"

void ConvertToChar::convertToChar(const std::string str)
{
    try {
        // std::cout << "char: '" << "'" << std::endl;
        // std::cout << "custom " << customStoi(str) << std::endl;
        if (str[str.length() - 1] == 'f')
        {
            //  int int_num = static_cast<int>(customStoi(str));
            // char charValue = customStoi(str) + '0';
            std::cout << "v: '" << customStoi(str) << "'" << std::endl;
            // std::cout << "v: '" << int_num << "'" << std::endl;
            // if (isprint(charValue))
                // std::cout << "char: '" << charValue << "'" << std::endl;
            // std::cout << "v: '" << customStoi(str) << "'" << std::endl;
        }
    } catch (const std::invalid_argument&) {
        std::cout << "char: Non displayable" << std::endl;
    }
}

// Custom function to convert string to int
char *ConvertToChar::customStoi(const std::string& str) {
    // int result = 0;
    char* p = static_cast<char*>(malloc(sizeof(char)));  // Allocate memory for an integer
    
    // char convert;
    int sign = 1;
    size_t i = 0;

    // Given a float number
    // float num = 42.0;

    // Convert the float to integer
    // int int_num = static_cast<int>(num);

    // Convert the integer to ASCII
    // char ascii_char = static_cast<char>(int_num);

    // Print the ASCII character
    // std::cout << "The ASCII character for the float " << num << " is " << ascii_char << std::endl;

    // Check for negative sign
    if (str[0] == '-') {
        sign = -1;
        ++i;
    }
    // std::cout << "str fresh :" << str << std::endl;

    // Convert each character to integer
    for (; i < str.length(); ++i) {
        // if ((str[i] >= '0' && str[i] <= '9')) {
            // result = result * 10 + (str[i] - '0');
            // std::cout << result;
            if (str[i] != '.')
            {
                p[i] = str[i];
                // std::cout << "str fresh :" << str[i] << std::endl;
            }
        // }
        // else {
        //     throw std::invalid_argument("Invalid integer literal");
        // }
    }
    
    std::cout << "--> p  " << p << std::endl;
    // Convert the integer to ASCII
    char ascii_char = static_cast<char>(p);
    // std::cout << "str ..... :" << ascii_char11 << std::endl;
    // convert = result / 10 + '0';
    // std::cout << "---::: " << convert << std::endl;
    // std::cout << std::endl;
    // std::cout << "---::: " << result << std::endl;
    return p;
}

ConvertToChar::ConvertToChar(/* args */)
{
}

ConvertToChar::~ConvertToChar()
{
}