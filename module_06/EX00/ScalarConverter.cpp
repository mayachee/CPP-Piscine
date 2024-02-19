/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:44:24 by mayache-          #+#    #+#             */
/*   Updated: 2024/02/19 22:40:51 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string& str)
{
    if (str == "nan" || str == "Nan")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << str << "f" << std::endl;
        std::cout << "double: " << str << std::endl;
        exit(0);
    }
    // Convert to char
    try {
        char charValue = customStoi(str);
        if (isprint(charValue)) {
            std::cout << "char: '" << charValue << "'" << std::endl;
        } else {
            std::cout << "char: Non displayable" << std::endl;
        }
    } catch (const std::invalid_argument&) {
        std::cout << "char: Non displayable" << std::endl;
    }

    // Convert to int
    try {
        int intValue = customStoi(str);
        std::cout << "int: " << intValue << std::endl;
    } catch (const std::invalid_argument&) {
        std::cerr << "Invalid int literal" << std::endl;
    }

    // // Convert to float
    // try {
    //     float floatValue = std::stof(str);
    //     std::cout << "float: " << floatValue << "f" << std::endl;
    // } catch (const std::invalid_argument&) {
    //     std::cerr << "Invalid float literal" << std::endl;
    // }

    // // Convert to double
    // try {
    //     // double doubleValue = customStod(str);
    //     // std::string ddd = static_cast<std::string> (doubleValue);
    //     double     doubleValue = static_cast<double>(str);
    //     std::cout << "double: " << doubleValue << std::endl;
    //     // std::cout << "double: " << doubleValue << std::endl;
    // } catch (const std::invalid_argument&) {
    //     std::cerr << "Invalid double literal" << std::endl;
    // }

        // Convert to double
    try {
        double doubleValue = customStod(str);
        std::cout << "double: " << doubleValue << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }
}

double ScalarConverter::customStod(const std::string& str) {
    std::istringstream iss(str);
    double result;
    if (!(iss >> result)) {
        throw std::invalid_argument("Invalid double literal");
    }
    return result;
}
// Custom function to convert string to double
// double ScalarConverter::customStod(const std::string& str) {
//     double result = 0.0;
//     double sign = 1.0;
//     size_t i = 0;
//     bool hasDecimal = false;
//     int decimalPosition = 0;

//     // Check for negative sign
//     if (str[0] == '-') {
//         sign = -1.0;
//         ++i;
//     }

//     // Convert each character to double
//     for (; i < str.length(); ++i) {
//         if (str[i] >= '0' && str[i] <= '9') {
//             result = result * 10.0 + (str[i] - '0');
//             if (hasDecimal) {
//                 ++decimalPosition;
//             }
//         } else if (str[i] == '.') {
//             if (hasDecimal) {
//                 throw std::invalid_argument("Invalid double literal");
//             }
//             hasDecimal = true;
//         } else {
//             throw std::invalid_argument("Invalid double literal");
//         }
//     }

//     if (hasDecimal) {
//         result /= pow(10.0, decimalPosition);
//     }
//     result *= sign;
//     // std::string resultStr = doubleToString(result);
//     return result;
// }

std::string  ScalarConverter::doubleToString(double value) {
    char buffer[50];
    
    std::sprintf(buffer, "%.2f", value);
    return std::string(buffer);
}


// Custom function to convert string to int
int ScalarConverter::customStoi(const std::string& str) {
    int result = 0;
    int sign = 1;
    size_t i = 0;

    // Check for negative sign
    if (str[0] == '-') {
        sign = -1;
        ++i;
    }

    // Convert each character to integer
    for (; i < str.length(); ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
        } else {
            throw std::invalid_argument("Invalid integer literal");
        }
    }
    return result * sign;
}

ScalarConverter::ScalarConverter(/* args */)
{
}

ScalarConverter::~ScalarConverter()
{
}
