/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:44:24 by mayache-          #+#    #+#             */
/*   Updated: 2024/02/20 20:40:54 by mayache-         ###   ########.fr       */
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
        if (isprint(charValue))
            std::cout << "char: '" << charValue << "'" << std::endl;
    } catch (const std::invalid_argument&) {
        std::cout << "char: Non displayable" << std::endl;
    }

    convertToInteger(str);
    convertToFloat(str);
    convertToDouble(str);
}

int ScalarConverter::extractInteger(std::string str) {
    try {
        return std::stoi(str); // Convert string to integer
    } catch (const std::invalid_argument&) {
        return 0; // Return 0 if conversion fails
    } catch (const std::out_of_range&) {
        return 0; // Return 0 if value is out of range
    }
}
int ScalarConverter::isInteger(const std::string& str) {

 std::string numStr;
    int startIdx = 0;
    int sign = 1;

    // Handle sign
    if (str[0] == '-' || str[0] == '+') {
        if (str[0] == '-')
            sign = -1;
        startIdx = 1;
    }
    // Find the end of the integer part
    size_t dotPosition = str.find('.');
    size_t endIdx = (dotPosition != std::string::npos) ? dotPosition : str.length();

    // Extract the integer part
    numStr = str.substr(startIdx, endIdx - startIdx);
    return extractInteger(numStr); 
}

void ScalarConverter::convertToInteger(const std::string& str) {
    if (isInteger(str)) {
        std::cout << "Integer: " << isInteger(str) << std::endl;
    } else {
        std::cout << "Not an integer number." << std::endl;
    }
}
void ScalarConverter::convertToFloat(const std::string& str) {
    try {

        if (isNumeric(str))
        {
            std::cout << "float: " << str << ".0f" << std::endl;
        }
        else if (isDouble(str))
        {
            std::cout << "float: ";
            for (size_t i = 0; i < str.length(); i++)
            {
                std::cout << str[i];
            }
            std::cout << std::endl;
        }
        else if (isFloat(str))
        {
            std::cout << "float: ";
            for (size_t i = 0; i < str.length() - 1; i++)
            {
                std::cout << str[i];
            }
            std::cout << std::endl;
        }
        // if (str[str.length() ] != 'f')
        //     std::cout << "f";
    } catch (const std::invalid_argument&) {
        std::cerr << "Invalid float literal" << std::endl;
    }
}

void ScalarConverter::convertToDouble(const std::string& str) {
    size_t len = 0;
    try {
        if (isNumeric(str))
        {
            std::cout << "double: " << str << ".0" << std::endl;
        }
        else if (isDouble(str))
        {
            std::cout << "double: ";
            len = str.length();
            if (str[str.length() - 1] == 'f')
                len = str.length() - 1;
            for (size_t i = 0; i < len; i++)
            {
                std::cout << str[i];
            }
            std::cout << std::endl;
        }
        else if (isFloat(str))
        {
            std::cout << "double: " << std::endl;
            
            for (size_t i = 0; i < str.length() - 1; i++)
            {
                std::cout << str[i];
            }
            std::cout << std::endl;
        }
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }
}


bool ScalarConverter::isNumeric(const std::string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}
bool ScalarConverter::isFloat(const std::string& str) {
    bool bl = false;
    if ((isdigit(str[0])) || ((str[0] == '-') || (str[0] == '+')))
        bl = true;
    else
        bl = false;
    if (str[str.length()] == 'f')
    {
        bl = true;
    }
    else
        bl = false;
    for (size_t i = 0; i < str.length(); i++) {
        if (str[i] == '.') {     
            bl = true;
        }
        else
            bl = false;
    }
    return bl;
}

bool ScalarConverter::isDouble(const std::string& str) {
    bool bl = false;
    if ((isdigit(str[0])) || ((str[0] == '-') || (str[0] == '+')))
        bl = true;
    for (size_t i = 0; i < str.length(); i++) {
        if (str[i + 1] == '.' && (str[i] < '0' && str[i ] > '9')) {     
            bl = true;
        }
    }
    if (str[str.length()] == 'f')
    {
        bl = false;
    }
    return bl;
}

double ScalarConverter::customStod(const std::string& str) {
    std::istringstream iss(str[str.length() - 1]);
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
